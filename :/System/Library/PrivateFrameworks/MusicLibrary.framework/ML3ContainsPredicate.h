/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3PropertyPredicate.h>

@interface ML3ContainsPredicate : ML3PropertyPredicate {

	id _values;

}

@property (nonatomic,copy) id values;              //@synthesize values=_values - In the implementation block
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 valueSet:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setValues:(id)arg1 ;
-(id)values;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(id)initWithProperty:(id)arg1 values:(id)arg2 ;
@end

