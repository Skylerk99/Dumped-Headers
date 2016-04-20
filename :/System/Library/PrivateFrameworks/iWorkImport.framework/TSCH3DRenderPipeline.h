/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DRenderProcessor, TSCH3DSession, TSCH3DGLContext;

@interface TSCH3DRenderPipeline : NSObject {

	TSCH3DRenderProcessor* mProcessor;
	TSCH3DSession* mSession;

}

@property (nonatomic,retain) TSCH3DRenderProcessor * processor; 
@property (nonatomic,readonly) TSCH3DSession * session; 
@property (nonatomic,readonly) TSCH3DGLContext * context; 
+(id)pipelineWithProcessor:(id)arg1 session:(id)arg2 ;
+(id)clipRectForTargetSize:(const tvec2<int>*)arg1 intermediateSize:(const tvec2<int>*)arg2 ;
-(TSCH3DRenderProcessor *)processor;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 ;
-(void)setProcessor:(TSCH3DRenderProcessor *)arg1 ;
-(TSCH3DSession *)session;
-(void)dealloc;
-(TSCH3DGLContext *)context;
@end

