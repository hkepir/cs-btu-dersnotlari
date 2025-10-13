package ders;

public class TV {
	int channel = 1;
	int volumeLevel = 1;
	boolean on = false;
	
	public TV() {
	
	}
	
	public void turnOn() {
		on =true;
	}
	public void turnOff() {
		on =false;
	}
	
	public void setChannel(int newChannel) {
		if (on && newChannel >= 1 && newChannel <=120) {
			this.channel = newChannel;
		}
	}
	
	public void setVolume(int newVolumeLevel) {
		if (on && newVolumeLevel >= 0 && newVolumeLevel <= 10) {
			this.volumeLevel = newVolumeLevel;
		}
	}
	
	public void channelUp() {
		if (on && channel<120) {
			channel++;
		}
	}
	
	public void channelDown() {
		if (on && channel>1) {
			channel--;
		}
	}
	public void volumelUp() {
		if (on && volumeLevel<120) {
			volumeLevel++;
		}
	}
	
	public void volumeDown() {
		if (on && volumeLevel>1) {
			volumeLevel--;
		}
	}
	
	
	
}
