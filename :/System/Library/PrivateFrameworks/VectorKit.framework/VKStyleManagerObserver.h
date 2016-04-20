/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKStyleManagerObserver <NSObject>
@property (nonatomic,readonly) shared_ptr<gss::StyleManager>* styleManager; 
@optional
-(void)stylesheetWillChange;
-(void)stylesheetDidReload;
-(void)stylesheetTransitionDidProgress;
-(void)prepareForStylesheetTransitionToMapDisplayStyle:(DisplayStyle)arg1 withReadinessBlock:(/*^block*/id)arg2;
-(void)stylesheetWillTransition:(DisplayStyle)arg1;
-(void)stylesheetDoneChanging;
-(void)stylesheetDidChange;

@required
+(BOOL)reloadOnStylesheetChange;
-(shared_ptr<gss::StyleManager>*)styleManager;

@end

