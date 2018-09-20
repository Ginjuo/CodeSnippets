import numpy as np
import matplotlib.pyplot as plt
import sounddevice as sd

plt.close('all')

fs = 44100 # Hz 
t = 2  # sekunder

N = fs*t
t_axis = np.arange(N)/fs

# SINUS #############################
f1 = 14000  # sinus frekvens
s1 = np.sin(f1*2*np.pi*t_axis)

fig1 = plt.figure()
ax1 = fig1.add_subplot(111)
ax1.plot(t_axis, s1)
ax1.set_xlabel('Time(s)')
ax1.set_ylabel('Ampltiude')

#sd.play(x,fs,blocking=True)

# FFT ###############################
S1 = np.fft.fft(s1)

f_axis = np.arange(N)*(fs/N)

fig2 = plt.figure()
ax2 = fig2.add_subplot(111)
ax2.plot(f_axis, np.absolute(S1))
ax2.set_xlabel('Frequency(Hz)')
ax2.set_ylabel('Magnitude')

# MIXING ############################ 
f2 = 10000  # sinus frekvens
s2 = np.sin(f2*2*np.pi*t_axis)
S2 = np.fft.fft(s2)

ax2.plot(f_axis, np.absolute(S2))

mix = s1 * s2
MIX = np.fft.fft(mix)
ax2.plot(f_axis, np.absolute(MIX))

plt.show()
#ax1.plot(t_axis,s2)









    
