/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLLibrarySPI.h>

@class MTLToolsPointerArray, NSString, NSArray;

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI> {

	MTLToolsPointerArray* _functions;

}

@property (nonatomic,readonly) MTLToolsPointerArray * functions;              //@synthesize functions=_functions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * functionNames; 
-(NSArray *)functionNames;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)newFunctionWithName:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
-(void)acceptVisitor:(id)arg1 ;
-(MTLToolsPointerArray *)functions;
@end

