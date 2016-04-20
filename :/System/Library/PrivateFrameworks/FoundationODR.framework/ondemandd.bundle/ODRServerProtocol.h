/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ODRServerProtocol <NSObject>
@required
-(void)tagStateInBundle:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)beginODRSessionWithBundleURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setPreservationPriority:(double)arg1 forTags:(id)arg2 inBundle:(id)arg3;
-(void)setLoadingPriority:(double)arg1 forTags:(id)arg2 inBundle:(id)arg3;
-(void)pinTags:(id)arg1 inBundle:(id)arg2 priority:(double)arg3 completionHandler:(/*^block*/id)arg4;
-(void)conditionallyPinTags:(id)arg1 inBundle:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)hello:(/*^block*/id)arg1;
-(void)unpinTags:(id)arg1 inBundle:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)okToPurgeAssetPacks:(id)arg1;
-(void)setAlwaysPreserved:(BOOL)arg1 forTags:(id)arg2 inBundle:(id)arg3;

@end

