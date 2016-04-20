/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:09 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSString, NSDictionary;

@interface LSOpenOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	BOOL _sourceIsManaged;
	BOOL _userSpecifiedApp;
	NSURL* _resourceURL;
	NSString* _applicationIdentifier;
	NSString* _documentIdentifier;
	id _userInfoPlist;
	NSDictionary* _options;
	id _delegate;
	int _result;

}
-(BOOL)performAppLinkOpen;
-(BOOL)isConcurrent;
-(id)initForOpeningResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7 ;
-(BOOL)didSucceed;
-(id)error;
-(void)dealloc;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)completeOperation;
@end

