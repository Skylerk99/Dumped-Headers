/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3D2DDataBuffer.h>

@interface TSCH3DVectorN2DDataBuffer : TSCH3D2DDataBuffer {

	vector<unsigned char, std::__1::allocator<unsigned char> > mContainer;

}

@property (nonatomic,readonly) vector<unsigned char* container; 
-(unsigned long long)componentByteSize;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 ;
-(void)fillCapacity;
-(void)resizeFillDimension:(const DataBuffer2DDimension*)arg1 ;
-(void*)mutableData;
-(unsigned long long)count;
-(const void*)data;
-(vector<unsigned char*)container;
-(int)componentType;
@end

