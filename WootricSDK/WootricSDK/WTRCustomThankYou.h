//
//  WTRCustomThankYou.h
//  WootricSDK
//
// Copyright (c) 2015 Wootric (https://wootric.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface WTRCustomThankYou : NSObject

@property (nonatomic, strong) NSString *thankYouMessage;
@property (nonatomic, strong) NSString *detractorThankYouMessage;
@property (nonatomic, strong) NSString *passiveThankYouMessage;
@property (nonatomic, strong) NSString *promoterThankYouMessage;
@property (nonatomic, strong) NSString *thankYouLinkText;
@property (nonatomic, strong) NSURL *thankYouLinkURL;
@property (nonatomic, strong) NSString *detractorThankYouLinkText;
@property (nonatomic, strong) NSURL *detractorThankYouLinkURL;
@property (nonatomic, strong) NSString *passiveThankYouLinkText;
@property (nonatomic, strong) NSURL *passiveThankYouLinkURL;
@property (nonatomic, strong) NSString *promoterThankYouLinkText;
@property (nonatomic, strong) NSURL *promoterThankYouLinkURL;
@property (nonatomic, strong) UIColor *backgroundColor;

@end
