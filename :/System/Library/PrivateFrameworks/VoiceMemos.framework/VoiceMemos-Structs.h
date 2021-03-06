/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_RC1;

typedef struct OpaqueExtAudioFile* OpaqueExtAudioFileRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct {
	double beginTime;
	double endTime;
} SCD_Struct_RC4;

typedef struct AudioUnitMeterClipping {
	float peakValueSinceLastCall;
	unsigned char sawInfinity;
	unsigned char sawNotANumber;
} AudioUnitMeterClipping;

typedef struct PowerMeter {
	BOOL mInstantaneousMode;
	double mSampleRate;
	double mPeakDecay1;
	double mPeakDecay;
	double mDecay1;
	double mDecay;
	int mPrevBlockSize;
	int mPeakHoldCount;
	double mPeak;
	double mAveragePowerPeak;
	double mMaxPeak;
	AudioUnitMeterClipping mClipping;
	double mAveragePowerF;
	float m_vAvePower[16];
	int mAveragePowerI;
} PowerMeter;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __first_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFArray* CFArrayRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_RC14;

typedef struct {
	float scale;
	double vDeltaWaveformToTimeBaseline;
	double vDeltaTimeBaselineToTitleBaseline;
	double vDeltaTitleBaselineToDateBaseline;
	double vDeltaDateBaselineToControlsTop;
	double vDeltaControlsBottomToBottom;
	double vDeltaControlsTopToNavigationBottom;
	BOOL hIsWaveformFlushToEdges;
	double hDeltaAdditionalInsetFromWaveformEdge;
	double hDeltaControlButtonsSpacing;
	double hDeltaTrimProgressInset;
	double hDeltaAcousticAnnotationLabelToWaveformRight;
	double hTrimModeInset;
	double hDetailNavigationBarInset;
	double hPresentedRecordMemoHeight;
	double vDeltaLockNotificationListTop;
	double vDeltaLockNotificationListTopToRecordingTextBaseline;
	double vDeltaLockAbsoluteTopToWaveformTop;
	double vDeltaLockNotificationListBottom;
	double vDeltaLockNotificationListBottomToRecordingTimeBaseline;
} SCD_Struct_RC15;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGContext* CGContextRef;

typedef struct CGGradient* CGGradientRef;

