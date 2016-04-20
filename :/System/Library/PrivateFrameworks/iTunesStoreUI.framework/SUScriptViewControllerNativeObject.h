/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:13 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <libobjc.A.dylib/SKUIPassbookLoaderDelegate.h>

@class SKUIPassbookLoader, NSString;

@interface SUScriptViewControllerNativeObject : SUScriptNativeObject <SKUIPassbookLoaderDelegate> {

	SKUIPassbookLoader* _passbookLoader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)presentationViewControllerForPassbookLoader:(id)arg1 ;
-(void)passbookLoaderDidFinish:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(void)setScriptObject:(id)arg1 ;
-(void)_loadPassbookPassWithURL:(id)arg1 ;
-(void)_reloadVisibility;
-(void)_parentViewControllerChangeNotification:(id)arg1 ;
@end

