/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:18 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PKCaptureDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKCodeAcquisitionDelegate;
@class UINavigationBar, PKCaptureSession, PKReticleView, NSURLConnection, NSMutableData, UILabel, UIProgressView, NSSet, NSString;

@interface PKCodeAcquisitionViewController : UIViewController <PKCaptureDelegate, NSURLConnectionDataDelegate, UIGestureRecognizerDelegate> {

	UINavigationBar* _navBar;
	PKCaptureSession* _captureSession;
	PKReticleView* _reticleView;
	NSURLConnection* _downloadConnection;
	NSMutableData* _downloadData;
	long long _downloadExpectedContentSize;
	UILabel* _captionLabel;
	UIProgressView* _downloadProgressView;
	UILabel* _errorLabel;
	UILabel* _helpLabel;
	NSSet* _supportedBarcodeTypes;
	id<PKCodeAcquisitionDelegate> _delegate;

}

@property (assign,nonatomic) id<PKCodeAcquisitionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureSession:(id)arg1 isRunning:(BOOL)arg2 ;
-(void)_cleanupDownload;
-(void)_handleSingleTap:(id)arg1 ;
-(void)_setCaptureUIState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_restartCaptureSession;
-(void)_handleFoundCode:(id)arg1 ;
-(void)_handleDownloadFailureWithReason:(id)arg1 ;
-(void)_handleDownloadedPass:(id)arg1 ;
-(void)_handleDownloadFailureWithReason:(id)arg1 errorToDisplay:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<PKCodeAcquisitionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PKCodeAcquisitionDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
@end

