/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PASerializable <NSObject>
@required
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(NSMutableDictionary*)arg2;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(NSMutableDictionary*)arg2 andDataBufferDictionary:(NSMutableDictionary*)arg3;

@end

