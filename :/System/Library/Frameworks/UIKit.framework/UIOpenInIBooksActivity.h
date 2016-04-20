/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>

@class NSURL, NSString, LSApplicationProxy, NSOperation;

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate> {

	BOOL _shouldUnlinkFile;
	NSURL* _url;
	NSString* _applicationIdentifier;
	LSApplicationProxy* _applicationProxy;
	NSOperation* _operation;

}

@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL shouldUnlinkFile;                              //@synthesize shouldUnlinkFile=_shouldUnlinkFile - In the implementation block
@property (nonatomic,retain) NSString * applicationIdentifier;                   //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * applicationProxy;              //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) NSOperation * operation;                            //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bestJobNameForActivityItems:(id)arg1 ;
+(id)jobNameFormatForFile;
+(id)defaultJobName;
+(long long)activityCategory;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(NSURL *)url;
-(id)activityType;
-(NSString *)applicationIdentifier;
-(void)_cleanup;
-(void)setUrl:(NSURL *)arg1 ;
-(LSApplicationProxy *)applicationProxy;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
-(void)_finishedCopyingResource;
-(BOOL)shouldUnlinkFile;
-(id)printInteractionController;
-(void)setShouldUnlinkFile:(BOOL)arg1 ;
-(void)_openDocumentWithApplication;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
@end

