/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:32 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DGLBindable.h>

@class NSString;

@interface TSCH3DGLRenderBuffer : NSObject <TSCH3DGLBindable> {

	unsigned mBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bindInSession:(id)arg1 ;
-(void)destroyResourcesInContext:(id)arg1 ;
-(void)deactivateInContext:(id)arg1 ;
-(id)initWithGLBuffer:(unsigned)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(BOOL)valid;
@end

