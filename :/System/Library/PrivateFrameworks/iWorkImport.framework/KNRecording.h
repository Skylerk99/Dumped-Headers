/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSArray, KNRecordingMovieTrack, NSDate, KNRecordingSyncState;

@interface KNRecording : TSPObject {

	NSArray* mEventTracks;
	KNRecordingMovieTrack* mMovieTrack;
	double mDuration;
	NSDate* mModificationDate;
	KNRecordingSyncState* mSyncState;

}

@property (nonatomic,readonly) NSArray * eventTracks; 
@property (nonatomic,readonly) KNRecordingMovieTrack * movieTrack; 
@property (nonatomic,readonly) double duration; 
@property (getter=isInSyncWithShow,nonatomic,readonly) BOOL inSyncWithShow; 
@property (nonatomic,readonly) NSDate * modificationDate; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(RecordingArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4 modificationDate:(id)arg5 ;
-(NSArray *)eventTracks;
-(KNRecordingMovieTrack *)movieTrack;
-(id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4 ;
-(BOOL)isInSyncWithShow;
-(BOOL)isLocallyOutOfSyncWithShowUsingLocalOutOfSyncToken:(id)arg1 ;
-(id)recordingByReplacingSegmentAfterTime:(double)arg1 withRecording:(id)arg2 ;
-(id)recordingByMarkingAsOutOfSyncWithShow:(BOOL)arg1 withLocalOutOfSyncToken:(id)arg2 restoringModificationDate:(id)arg3 ;
-(void)dealloc;
-(double)duration;
-(NSDate *)modificationDate;
-(id)initWithContext:(id)arg1 ;
@end

