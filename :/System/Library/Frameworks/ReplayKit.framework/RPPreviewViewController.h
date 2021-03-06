/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/RPVideoEditorViewControllerDelegate.h>

@protocol RPPreviewViewControllerDelegate;
@interface RPPreviewViewController : UIViewController <RPVideoEditorViewControllerDelegate> {

	id<RPPreviewViewControllerDelegate> _previewControllerDelegate;

}

@property (assign,nonatomic,__weak) id<RPPreviewViewControllerDelegate> previewControllerDelegate;              //@synthesize previewControllerDelegate=_previewControllerDelegate - In the implementation block
+(void)loadPreviewViewControllerWithMovieURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPreviewControllerDelegate:(id<RPPreviewViewControllerDelegate>)arg1 ;
-(void)videoEditor:(id)arg1 didFinishWithActivityTypes:(id)arg2 ;
-(void)extensionDidFinishWithActivityTypes:(id)arg1 ;
-(id<RPPreviewViewControllerDelegate>)previewControllerDelegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

