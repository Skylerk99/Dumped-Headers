/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/MobileSubstrate/DynamicLibraries/Flex.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FLClass;

@interface FLClassParser : NSObject {

	Class _class;
	FLClass* _echelon;

}

@property (__weak) FLClass * echelon;              //@synthesize echelon=_echelon - In the implementation block
-(void)setEchelon:(FLClass *)arg1 ;
-(FLClass *)echelon;
-(id)parseClassMethods;
-(id)parseInstanceMethods;
-(id)parseEchelon:(Class)arg1 prefix:(id)arg2 ;
-(id)methods;
-(id)initWithClass:(Class)arg1 ;
@end

