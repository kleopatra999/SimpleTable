//==============================================================================
//
//  ASTItemSubclass.h
//
//==============================================================================
//
//  Copyright (c) 2016 Adobe Systems Incorporated. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.
//
//==============================================================================

// Why are you looking here? It said private!

#import "ASTItem.h"


NS_ASSUME_NONNULL_BEGIN

@interface ASTItem() {
	NSMutableDictionary* _cellProperties;
	UITableViewCell* _cell;
}

@property (nonatomic) Class cellClass;
@property (nonatomic) UITableViewCellStyle cellStyle;

@property (weak,nullable,nonatomic) ASTViewController* tableViewController;
@property (nullable,nonatomic) ASTSection* section;

- (void) loadCell;
- (void) didEndDisplayingCell;

// Cell Attributes

- (void) setCellPropertiesValue: (id __nullable) value forKeyPath: (NSString*) keyPath;
- (id __nullable) cellPropertiesValueForKeyPath: (NSString*) keyPath;

- (void) setCellPropertyValue: (id __nullable) value forKeyPath: (NSString*) keyPath;

- (id) resolveTargetObjectReference: (id) objectReference;
- (void) sendAction: (SEL) action to: (id) target;

@end

NS_ASSUME_NONNULL_END
