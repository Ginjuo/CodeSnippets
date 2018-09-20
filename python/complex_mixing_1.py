import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D # den bliver brugt selvom den ikke siger det

plt.close('all')

fs = 40 # Hz 
t = 2  # sekunder
N = fs*t

t_axis = np.arange(N)/fs
f_axis = np.arange(N)*(fs/N)
f_axis_shifted = np.arange(-N/2, N/2)*(fs/N)

# SINUS #############################
f1 = 23  # sinus frekvens
I1 = np.cos(f1*2*np.pi*t_axis)
Q1 = np.sin(f1*2*np.pi*t_axis)

# PLOT ##############################
fig1 = plt.figure()
ax1 = fig1.gca(projection='3d')
ax1.plot(t_axis, I1, Q1)
ax1.set_xlabel('Time(s)')
ax1.set_ylabel('I')
ax1.set_zlabel('Q')
ax1.set_title('Original signal')

# FFT ###############################
s1 = I1 + 1j*Q1
S1 = np.fft.fft(s1)
S1_shifted = np.fft.fftshift(S1)

fig2 = plt.figure()
ax2 = fig2.add_subplot(111)
ax2.plot(f_axis_shifted, np.absolute(S1_shifted), label="f1")
ax2.set_xlabel('Frequency(Hz)')
ax2.set_ylabel('Magnitude')

ax2.set_title('fs = {}, f1 = {}'.format(fs, f1))
sys.exit()

# LOCAL OSCILLATOR ##################
f2 = -4  # sinus frekvens
I2 = np.cos(f2*2*np.pi*t_axis)
Q2 = np.sin(f2*2*np.pi*t_axis)

s2 = I2 + 1j*Q2
S2 = np.fft.fft(s2)
S2_shifted = np.fft.fftshift(S2)
ax2.plot(f_axis_shifted, np.absolute(S2_shifted), label="f2")

# MIXING ############################
mix1 = s1 * s2
MIX1 = np.fft.fft(mix1)
MIX1_shifted = np.fft.fftshift(MIX1)
ax2.plot(f_axis_shifted, np.absolute(MIX1_shifted), label="mix")
ax2.legend(loc='upper right')

fig3 = plt.figure()
ax3 = fig3.gca(projection='3d')
ax3.plot(t_axis, mix1.real, mix1.imag)
ax3.set_xlabel('Time(s)')
ax3.set_ylabel('I')
ax3.set_zlabel('Q')
ax3.set_title('Mixed signal')
    
    