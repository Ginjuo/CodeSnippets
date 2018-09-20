import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D  # is used even though editor greys it out

"""
Python library used to make cleaner plot calls
"""


class plot_single:
    def __init__(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        self.fig = plt.figure()
        self.ax1 = self.fig.add_subplot(111)

        if y is None:
            self.ax1.plot(x, label=label)
        else:
            self.ax1.plot(x, y, label=label)

        if xaxis is not None:
            self.ax1.set_xlabel(xaxis)
        else:
            self.ax1.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()


class plot_single_dot:
    def __init__(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        self.fig = plt.figure()
        self.ax1 = self.fig.add_subplot(111)

        if y is None:
            self.ax1.plot(x, 'o', label=label)
        else:
            self.ax1.plot(x, y, 'o', label=label)

        if xaxis is not None:
            self.ax1.set_xlabel(xaxis)
        else:
            self.ax1.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()


class plot_single_dot_dash:
    def __init__(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        self.fig = plt.figure()
        self.ax1 = self.fig.add_subplot(111)

        if y is None:
            self.ax1.plot(x, 'o-', label=label)
        else:
            self.ax1.plot(x, y, 'o-', label=label)

        if xaxis is not None:
            self.ax1.set_xlabel(xaxis)
        else:
            self.ax1.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()


class plot_single_3d:
    def __init__(self, x, y=None, z=None, label=None, title=None, xaxis=None, yaxis=None, zaxis=None):
        self.fig = plt.figure()
        self.ax1 = self.fig.gca(projection='3d')

        if (y is None) and (z is None):
            return
        else:
            self.ax1.plot(x, y, z, label=label)

        if xaxis is not None:
            self.ax1.set_xlabel(xaxis)
        else:
            self.ax1.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Real')

        if zaxis is not None:
            self.ax1.set_zlabel(zaxis)
        else:
            self.ax1.set_zlabel('Imaginary')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()


class plot_double:
    def __init__(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        self.fig = plt.figure()
        self.ax1 = self.fig.add_subplot(211)
        self.ax2 = self.fig.add_subplot(212)

        if y is None:
            self.ax1.plot(x, label=label)
        else:
            self.ax1.plot(x, y, label=label)

        if xaxis is not None:
            self.ax1.set_xlabel(xaxis)
        else:
            self.ax1.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def top(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax1.plot(x, label=label)
        else:
            self.ax1.plot(x, y, label=label)

        if xaxis is not None:
            self.ax1.set_xlabel(xaxis)
        else:
            self.ax1.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def bottom(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax2.plot(x, label=label)
        else:
            self.ax2.plot(x, y, label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Sample')

        if yaxis is not None:
            self.ax2.set_ylabel(yaxis)
        else:
            self.ax2.set_ylabel('Amplitude')

        if title is not None:
            self.ax2.set_title(title)

        plt.tight_layout()


class plot_double_dot:
    def __init__(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        self.fig = plt.figure()
        self.ax1 = self.fig.add_subplot(211)
        self.ax2 = self.fig.add_subplot(212)

        if y is None:
            self.ax1.plot(x, 'o', label=label)
        else:
            self.ax1.plot(x, y, 'o', label=label)

        if xaxis is not None:
            self.ax1.set_xlabel(xaxis)
        else:
            self.ax1.set_xlabel('Frequency')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def top(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax1.plot(x, 'o', label=label)
        else:
            self.ax1.plot(x, y, 'o', label=label)

        if xaxis is not None:
            self.ax1.set_xlabel(xaxis)
        else:
            self.ax1.set_xlabel('Frequency')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def bottom(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax2.plot(x, 'o', label=label)
        else:
            self.ax2.plot(x, y, 'o', label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Frequency')

        if yaxis is not None:
            self.ax2.set_ylabel(yaxis)
        else:
            self.ax2.set_ylabel('Amplitude')

        if title is not None:
            self.ax2.set_title(title)

        plt.tight_layout()


class plot_double_shared:
    def __init__(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        self.f, self.axarr = plt.subplots(2, sharex=True)
        self.ax1 = self.axarr[0]
        self.ax2 = self.axarr[1]

        if y is None:
            self.ax1.plot(x, label=label)
        else:
            self.ax1.plot(x, y, label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def top(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax1.plot(x, label=label)
        else:
            self.ax1.plot(x, y, label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def bottom(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax2.plot(x, label=label)
        else:
            self.ax2.plot(x, y, label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Sample')

        if yaxis is not None:
            self.ax2.set_ylabel(yaxis)
        else:
            self.ax2.set_ylabel('Amplitude')

        if title is not None:
            self.ax2.set_title(title)

        plt.tight_layout()


class plot_double_shared_dot:
    def __init__(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        self.f, self.axarr = plt.subplots(2, sharex=True)
        self.ax1 = self.axarr[0]
        self.ax2 = self.axarr[1]

        if y is None:
            self.ax1.plot(x, 'o', label=label)
        else:
            self.ax1.plot(x, y, 'o', label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def top(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax1.plot(x, 'o', label=label)
        else:
            self.ax1.plot(x, y, 'o', label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def bottom(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax2.plot(x, 'o', label=label)
        else:
            self.ax2.plot(x, y, 'o', label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Sample')

        if yaxis is not None:
            self.ax2.set_ylabel(yaxis)
        else:
            self.ax2.set_ylabel('Amplitude')

        if title is not None:
            self.ax2.set_title(title)

        plt.tight_layout()


class plot_double_shared_dot_dash:
    def __init__(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        self.f, self.axarr = plt.subplots(2, sharex=True)
        self.ax1 = self.axarr[0]
        self.ax2 = self.axarr[1]

        if y is None:
            self.ax1.plot(x, 'o-', label=label)
        else:
            self.ax1.plot(x, y, 'o-', label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def top(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax1.plot(x, 'o-', label=label)
        else:
            self.ax1.plot(x, y, 'o-', label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def bottom(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax2.plot(x, 'o-', label=label)
        else:
            self.ax2.plot(x, y, 'o-', label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Sample')

        if yaxis is not None:
            self.ax2.set_ylabel(yaxis)
        else:
            self.ax2.set_ylabel('Amplitude')

        if title is not None:
            self.ax2.set_title(title)

        plt.tight_layout()


class plot_triple:
    def __init__(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        self.fig = plt.figure()
        self.ax1 = self.fig.add_subplot(311)
        self.ax2 = self.fig.add_subplot(312)
        self.ax3 = self.fig.add_subplot(313)

        if y is None:
            self.ax1.plot(x, label=label)
        else:
            self.ax1.plot(x, y, label=label)

        if xaxis is not None:
            self.ax1.set_xlabel(xaxis)
        else:
            self.ax1.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def top(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax1.plot(x, label=label)
        else:
            self.ax1.plot(x, y, label=label)

        if xaxis is not None:
            self.ax1.set_xlabel(xaxis)
        else:
            self.ax1.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def middle(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax2.plot(x, label=label)
        else:
            self.ax2.plot(x, y, label=label)

        if xaxis is not None:
            self.ax2.set_xlabel(xaxis)
        else:
            self.ax2.set_xlabel('Sample')

        if yaxis is not None:
            self.ax2.set_ylabel(yaxis)
        else:
            self.ax2.set_ylabel('Amplitude')

        if title is not None:
            self.ax2.set_title(title)

        plt.tight_layout()

    def bottom(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax3.plot(x, label=label)
        else:
            self.ax3.plot(x, y, label=label)

        if xaxis is not None:
            self.ax3.set_xlabel(xaxis)
        else:
            self.ax3.set_xlabel('Sample')

        if yaxis is not None:
            self.ax3.set_ylabel(yaxis)
        else:
            self.ax3.set_ylabel('Amplitude')

        if title is not None:
            self.ax3.set_title(title)

        plt.tight_layout()


class plot_triple_shared:
    def __init__(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        self.f, self.axarr = plt.subplots(3, sharex=True)
        self.ax1 = self.axarr[0]
        self.ax2 = self.axarr[1]
        self.ax3 = self.axarr[2]

        if y is None:
            self.ax1.plot(x, label=label)
        else:
            self.ax1.plot(x, y, label=label)

        if xaxis is not None:
            self.ax3.set_xlabel(xaxis)
        else:
            self.ax3.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def top(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax1.plot(x, label=label)
        else:
            self.ax1.plot(x, y, label=label)

        if xaxis is not None:
            self.ax3.set_xlabel(xaxis)
        else:
            self.ax3.set_xlabel('Sample')

        if yaxis is not None:
            self.ax1.set_ylabel(yaxis)
        else:
            self.ax1.set_ylabel('Amplitude')

        if title is not None:
            self.ax1.set_title(title)

        plt.tight_layout()

    def middle(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax2.plot(x, label=label)
        else:
            self.ax2.plot(x, y, label=label)

        if xaxis is not None:
            self.ax3.set_xlabel(xaxis)
        else:
            self.ax3.set_xlabel('Sample')

        if yaxis is not None:
            self.ax2.set_ylabel(yaxis)
        else:
            self.ax2.set_ylabel('Amplitude')

        if title is not None:
            self.ax2.set_title(title)

        plt.tight_layout()

    def bottom(self, x, y=None, label=None, title=None, xaxis=None, yaxis=None):
        if y is None:
            self.ax3.plot(x, label=label)
        else:
            self.ax3.plot(x, y, label=label)

        if xaxis is not None:
            self.ax3.set_xlabel(xaxis)
        else:
            self.ax3.set_xlabel('Sample')

        if yaxis is not None:
            self.ax3.set_ylabel(yaxis)
        else:
            self.ax3.set_ylabel('Amplitude')

        if title is not None:
            self.ax3.set_title(title)

        plt.tight_layout()