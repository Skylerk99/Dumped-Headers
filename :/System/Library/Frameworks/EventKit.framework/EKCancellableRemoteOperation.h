/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKCancellableRemoteOperation <NSObject>
@optional
-(void)receivedBatchResultsFromServer:(id)arg1 finished:(BOOL)arg2;

@required
-(void)cancel;
-(void)disconnect;

@end

