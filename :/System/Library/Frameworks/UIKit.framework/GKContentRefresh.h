/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GKContentRefresh <NSObject>
@optional
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/id)arg1;
-(void)_gkForceNextContentUpdate;

@required
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2;
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(/*^block*/id)arg1;

@end

