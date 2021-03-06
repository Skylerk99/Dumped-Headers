/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSDictionary;

@interface SCNMaterialAttachment : NSObject {

	unsigned glID;
	unsigned target;
	void* context;
	CGSize size;
	NSDictionary* options;

}

@property (assign,nonatomic) unsigned glID; 
@property (assign,nonatomic) unsigned target; 
@property (assign,nonatomic) void* context; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSDictionary * options; 
+(id)materialAttachmentWithGLKTextureInfo:(id)arg1 ;
-(unsigned)glID;
-(void)setGlID:(unsigned)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(void)setSize:(CGSize)arg1 ;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
@end

