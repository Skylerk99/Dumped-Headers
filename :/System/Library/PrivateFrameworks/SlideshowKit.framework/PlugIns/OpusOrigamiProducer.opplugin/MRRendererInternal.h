/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MRLiveSlideshowDelegate, MRAsynchronousOperationsDelegate;
#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRContext, NSObject, NSThread, NSConditionLock, MRRenderArguments, NSMutableArray, NSMutableDictionary, NSMutableSet, MRLayerEffect, NSString, MRImage, NSDictionary, MRLayerParallelizer, MRLayerNavigator, MRSlideFocusState, NSArray;

@interface MRRendererInternal : NSObject {

	MRContext* mContext;
	double mMasterStartTime;
	double mMasterDuration;
	int mMasterMode;
	NSObject*<OS_dispatch_queue> mRenderDispatchQueue;
	NSThread* mRenderThread;
	NSObject*<OS_dispatch_queue> mRenderDispatchQueueCopyForRenderThread;
	NSConditionLock* mFrameLock;
	double mTimeOffset;
	double mUnalteredTimeOffset;
	double mMasterClock;
	BOOL mIsStalled;
	BOOL mRenderingRequested;
	BOOL mSlaveFrameMode;
	CGPoint mContextOffset;
	MRRenderArguments* mRenderArguments;
	CGImageRef mSnapshotAsCGImage;
	NSConditionLock* mSnapshotAsCGImageLock;
	int mPreviousMode;
	double mModeChangeTime;
	NSMutableArray* mSelectedLayers;
	NSMutableDictionary* mLayerTrackings;
	NSMutableSet* mLayersCurrentlyTrackedIn;
	NSMutableDictionary* mGestureRecognizers;
	MRLayerEffect* mLayerCurrentlyTextEditing;
	NSString* mCurrentlyEditedTextElement;
	BOOL mShouldPauseWhenStill;
	BOOL mNeedsToResize;
	BOOL mNeedsToTemporaryResize;
	BOOL mNeedsToResumeOrPauseLayers;
	BOOL mNeedsToSynchronizeTimeInLayers;
	BOOL mNeedsToSynchronizeTimeInAudioMovies;
	CGSize mTemporarySize;
	double mMorphingStartTime;
	double mMorphingDuration;
	double mMorphingProgress;
	double mMorphingRotationAngle;
	BOOL mMorphingHandlesRotation;
	MRImage* mSnapshotForMorphing;
	NSMutableArray* mActions;
	NSDictionary* mDefaultActions;
	NSString* mTransitionLayerPlugObjectID;
	MRLayerParallelizer* mSlideFocusLayer;
	MRLayerNavigator* mSlideFocusNavigator;
	MRLayerEffect* mSlideFocuser[3];
	unsigned long long mCurrentSlideFocuserIndex;
	MRSlideFocusState* mSlideFocusState;
	NSMutableDictionary* mAudioPlayerBuckets;
	NSArray* mAudioPlayerSortedBuckets;
	id<MRLiveSlideshowDelegate> mLiveSlideshowDelegate;
	id<MRAsynchronousOperationsDelegate> mAsynchronousOperationsDelegate;
	BOOL mScreenBurnTest;
	unsigned long long mScreenBurnTestCurrentPass;
	MRImage* mScreenBurnTestAccumulationImage1;
	MRImage* mScreenBurnTestAccumulationImage2;
	NSMutableArray* mNavigatorHistoryBack;
	NSMutableArray* mNavigatorHistoryForth;
	BOOL mHideTextWhileEditing;
	double mFrameTime[64];
	unsigned mFrameTimeIndex;
	_sFILE* mRenderingLogFile;
	double mPreviousLogTime;
	double mLastSavedLogTime;
	NSString* mCurrentIDs;
	MRImage* mCurrentIDsImage;
	NSString* mPreviousCurrentIDs;
	double mOuterTime;
	int mTimeSyncRequestCount;
	int mIsPlayingSyncRequestCount;
	BOOL mOuterIsPlaying;
	BOOL mInnerIsPlaying;
	unsigned long long mCountOfPreloadingImages;
	NSMutableArray* mTouchesForVisualFeedback;
	NSMutableArray* mHitZonesForVisualFeedback;
	BOOL mUsesExternalDisplayLink;

}
@end

