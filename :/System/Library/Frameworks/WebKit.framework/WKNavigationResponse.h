/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKFrameInfo, NSURLRequest, NSURLResponse, NSString;

@interface WKNavigationResponse : NSObject <WKObject> {

	ObjectStorage<API::NavigationResponse> _navigationResponse;

}

@property (nonatomic,readonly) WKFrameInfo * _frame; 
@property (nonatomic,readonly) NSURLRequest * _request; 
@property (getter=isForMainFrame,nonatomic,readonly) BOOL forMainFrame; 
@property (nonatomic,copy,readonly) NSURLResponse * response; 
@property (nonatomic,readonly) BOOL canShowMIMEType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(NSURLRequest *)_request;
-(WKFrameInfo *)_frame;
-(void)dealloc;
-(NSString *)description;
-(NSURLResponse *)response;
-(Object*)_apiObject;
-(BOOL)isForMainFrame;
-(BOOL)canShowMIMEType;
@end

