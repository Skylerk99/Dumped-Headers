/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/Flex.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Flex.dylib/Flex.dylib-Structs.h>
@class FLTypeEncoding, FLMethodObjC;

@interface FLXOverrider : NSObject {

	id _instance;
	SEL _selector;
	void* _stackPointer;
	FLTypeEncoding* _typeEncoding;
	FLMethodObjC* _objcMethod;
	int _storedGeneralRegisters;
	int _storedVFPRegisters;
	int _registerSize;
	int _vfpRegisterSize;
	int _registerArguments;
	int _preRegisterBytesOnStack;
	int _preVFPRegistersBytesOnStack;
	int _preReturnOverrideRegisters;
	int _virtualStackPointerVariablesOffset;
	int _preOriginalStackBytesOnStack;

}
+(id)overriderWithInstance:(id)arg1 selector:(SEL)arg2 stackPointer:(void*)arg3 ;
-(int)argumentRegisterPosition:(int)arg1 ;
-(int)byteOffsetForVFPRegister:(int)arg1 ;
-(int)byteOffsetForRegister:(int)arg1 ;
-(int)byteOffsetForStackedArgument:(int)arg1 ;
-(void*)pointerToRegister:(int)arg1 ;
-(id)typeForArgumentAtIndex:(int)arg1 ;
-(int)byteOffsetForVFPArgument:(int)arg1 ;
-(int)byteOffsetForArgument:(int)arg1 ;
-(void*)pointerToArgument:(int)arg1 ;
-(BOOL)argumentIsOnStack:(int)arg1 ;
-(long long)parameterTypeForParameter:(int)arg1 ;
-(id)idArgumentFromStack:(int)arg1 ;
-(FLXOverriderClonedStack*)clonedArguments;
-(void)setOverridesFromHook:(id)arg1 ;
-(void)setParameter:(int)arg1 fromAddress:(void*)arg2 bytes:(int)arg3 ;
-(id)initWithInstance:(id)arg1 selector:(SEL)arg2 stackPointer:(void*)arg3 ;
-(void)cloneVariables;
-(void)setReturnValueFromAddress:(void*)arg1 bytes:(int)arg2 ;
-(void*)createClonedVariables;
-(id)stringFromArgument:(int)arg1 withType:(id)arg2 ;
-(void*)pointerToFPandLR;
-(void*)pointerToStackArgument:(int)arg1 ;
-(int)bytesForArgument:(int)arg1 ;
-(void)logAllArguments;
-(void)readFourteenArguments;
-(void)searchStack:(void*)arg1 ;
-(id)description;
@end

