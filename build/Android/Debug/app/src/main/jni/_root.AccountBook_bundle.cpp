// This file was generated based on C:/Users/SpaceJockey27/Documents/Fuse/AccountBook/AccountBook.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AccountBook_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[9];

namespace g{

// public static generated class AccountBook_bundle :0
// {
// static AccountBook_bundle() :0
static void AccountBook_bundle__cctor__fn(uType* __type)
{
    AccountBook_bundle::BudgetPagecc02de38_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[1/*"budgetpage-...*/]);
    AccountBook_bundle::Clickd3560fbe_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[2/*"click-fcdf7...*/]);
    AccountBook_bundle::InputPage7ad7b1e5_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[3/*"inputpage-0...*/]);
    AccountBook_bundle::lArrowc76aec54_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[4/*"larrow-d52b...*/]);
    AccountBook_bundle::ListPage5d08328d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[5/*"listpage-2d...*/]);
    AccountBook_bundle::NotoSansBoldd01b0e45_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[6/*"notosans-bo...*/]);
    AccountBook_bundle::rArrowd43ec882_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[7/*"rarrow-039b...*/]);
    AccountBook_bundle::StatisticPagef553aba9_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AccountBook"*/]))->GetFile(::STRINGS[8/*"statisticpa...*/]);
}

static void AccountBook_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("AccountBook");
    ::STRINGS[1] = uString::Const("budgetpage-364d57c0.js");
    ::STRINGS[2] = uString::Const("click-fcdf70de.wav");
    ::STRINGS[3] = uString::Const("inputpage-09a39ac3.js");
    ::STRINGS[4] = uString::Const("larrow-d52b35c8.png");
    ::STRINGS[5] = uString::Const("listpage-2d94c46f.js");
    ::STRINGS[6] = uString::Const("notosans-bold-6a4887eb.ttf");
    ::STRINGS[7] = uString::Const("rarrow-039baaa6.png");
    ::STRINGS[8] = uString::Const("statisticpage-191e04ff.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::BudgetPagecc02de38_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::Clickd3560fbe_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::InputPage7ad7b1e5_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::lArrowc76aec54_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::ListPage5d08328d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::NotoSansBoldd01b0e45_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::rArrowd43ec882_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AccountBook_bundle::StatisticPagef553aba9_, uFieldFlagsStatic);
}

uClassType* AccountBook_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("AccountBook_bundle", options);
    type->fp_build_ = AccountBook_bundle_build;
    type->fp_cctor_ = AccountBook_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::BudgetPagecc02de38_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::Clickd3560fbe_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::InputPage7ad7b1e5_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::lArrowc76aec54_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::ListPage5d08328d_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::NotoSansBoldd01b0e45_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::rArrowd43ec882_;
uSStrong< ::g::Uno::IO::BundleFile*> AccountBook_bundle::StatisticPagef553aba9_;
// }

} // ::g
