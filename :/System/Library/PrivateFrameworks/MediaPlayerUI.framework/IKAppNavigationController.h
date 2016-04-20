/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:06 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppNavigationController <NSObject>
@optional
-(void)clear;
-(void)presentModal:(id)arg1 options:(id)arg2;
-(void)dismissModal;

@required
-(id)documents;
-(void)pushDocument:(id)arg1 options:(id)arg2;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
-(void)popDocument;
-(void)popToDocument:(id)arg1;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1;

@end

