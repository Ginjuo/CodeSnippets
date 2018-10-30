%% First example
clc; clear; close all;

A = 1:20;
B = A;
B(B > 5 & B < 15) = 0;
figure(); plot(A, 'o');
figure(); plot(B, 'o');


%% SNR example
fs = 500;
t = 2;
N = t*fs;
t_axis = (1:N)'./fs;
f_axis_shifted = (-N/2:1:(N/2-1))'.*(fs/N);
f = 50;
x = cos(2*pi*f*t_axis); % cosinus
n = wgn(N,1,0);         % noise
s = x+n;
s_fft = abs(fftshift(fft(s)))./N;

Nin = s_fft;
Nin(f_axis_shifted > (f-1) & f_axis_shifted < (f+1)) = 0;
Nin(f_axis_shifted < -(f-1) & f_axis_shifted > -(f+1)) = 0;
Nin_pow = sum(Nin.^2);
Sin_pow = sum(s_fft.^2)-Nin_pow;
SNRin = Sin_pow/Nin_pow

figure(); plot(f_axis_shifted, s_fft);
figure(); plot(f_axis_shifted, Nin);
 
