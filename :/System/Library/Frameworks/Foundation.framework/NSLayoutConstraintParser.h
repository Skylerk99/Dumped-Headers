/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSLayoutItem;
#import <Foundation/Foundation-Structs.h>
@class NSString, NSDictionary, NSMutableArray;

@interface NSLayoutConstraintParser : NSObject {

	NSString* _line;
	const char* _lineChars;
	unsigned long long _lineLength;
	unsigned long long _opts;
	BOOL _useHorizontalArrangement;
	NSDictionary* _metrics;
	NSDictionary* _views;
	id<NSLayoutItem> _containerView;
	NSMutableArray* _constraints;
	NSMutableArray* _unflushedWidthConstraints;
	NSMutableArray* _alignmentConstraints;
	unsigned long long _currentCharacter;
	NSMutableArray* _incompleteConstraints;
	id<NSLayoutItem> _parsedLeftView;
	id<NSLayoutItem> _parsedRightView;
	id<NSLayoutItem> _parsedConstrainedWidthView;

}
+(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
-(id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
-(id)descriptionLineWithCurrentCharacterPointer;
-(void)failWithDescription:(id)arg1 ;
-(void)parseConnection;
-(id)parseView;
-(void)finishConstraint;
-(void)flushWidthConstraints;
-(NSRange)rangeOfName;
-(id)layoutItemForKey:(id)arg1 ;
-(void)parsePredicateList;
-(void)parsePredicateWithParentheses;
-(void)parsePredicate;
-(void)parseOp;
-(double)parseConstant;
-(id)metricForKey:(id)arg1 ;
-(void)findContainerView;
-(void)parse;
-(void)dealloc;
-(id)description;
-(id)constraints;
@end

