/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDGLLayerContext.h>

@protocol TSDGLLayerContext <NSObject>
@optional
-(void)lock;
-(void)unlock;

@required
-(BOOL)createFramebufferFromLayer:(id)arg1;
-(void)presentRenderbuffer;
-(BOOL)makeCurrentContext;
-(BOOL)isValid;
-(void)teardown;

@end


@class EAGLContext, NSString;

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext> {

	EAGLContext* mContext;
	unsigned mRenderbuffer;
	unsigned mFramebuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)createFramebufferFromLayer:(id)arg1 ;
-(void)presentRenderbuffer;
-(BOOL)makeCurrentContext;
-(void)dealloc;
-(id)init;
-(BOOL)isValid;
-(void)lock;
-(void)unlock;
-(void)teardown;
@end

