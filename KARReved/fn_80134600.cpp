//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80131928.hpp"
#include "fn_8014F118.hpp"
#include "fn_8014F384.hpp"
#include "fn_8014F4AC.hpp"
#include "fn_8014FEF8.hpp"
#include "fn_80150674.hpp"
#include "fn_80150F60.hpp"
#include "fn_80151368.hpp"
#include "fn_80151844.hpp"
#include "fn_80151F60.hpp"
#include "fn_8015258C.hpp"
#include "fn_80153068.hpp"
#include "fn_80153120.hpp"
#include "fn_80153658.hpp"
#include "fn_80153CC0.hpp"
#include "fn_801540E0.hpp"
#include "fn_80154340.hpp"
#include "fn_80154720.hpp"
#include "fn_80154D5C.hpp"
#include "fn_801550CC.hpp"
#include "fn_80155548.hpp"
#include "fn_8013B6F0.hpp"
#include "fn_80161C08.hpp"
#include "fn_80162940.hpp"



void fn_80134600(PPC::Runtime::GCContext* context)
{
/*80134600 00131400*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80134604 00131404*/ PPC::Runtime::ASM::mflr(context->r0);
/*80134608 00131408*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013460C 0013140C*/ PPC::Runtime::ASM::bl(fn_80131928);
/*80134610 00131410*/ PPC::Runtime::ASM::bl(fn_8014F118);
/*80134614 00131414*/ PPC::Runtime::ASM::bl(fn_8014F384);
/*80134618 00131418*/ PPC::Runtime::ASM::bl(fn_8014F4AC);
/*8013461C 0013141C*/ PPC::Runtime::ASM::bl(fn_8014FEF8);
/*80134620 00131420*/ PPC::Runtime::ASM::bl(fn_80150674);
/*80134624 00131424*/ PPC::Runtime::ASM::bl(fn_80150F60);
/*80134628 00131428*/ PPC::Runtime::ASM::bl(fn_80151368);
/*8013462C 0013142C*/ PPC::Runtime::ASM::bl(fn_80151844);
/*80134630 00131430*/ PPC::Runtime::ASM::bl(fn_80151F60);
/*80134634 00131434*/ PPC::Runtime::ASM::bl(fn_8015258C);
/*80134638 00131438*/ PPC::Runtime::ASM::bl(fn_80153068);
/*8013463C 0013143C*/ PPC::Runtime::ASM::bl(fn_80153120);
/*80134640 00131440*/ PPC::Runtime::ASM::bl(fn_80153658);
/*80134644 00131444*/ PPC::Runtime::ASM::bl(fn_80153CC0);
/*80134648 00131448*/ PPC::Runtime::ASM::bl(fn_801540E0);
/*8013464C 0013144C*/ PPC::Runtime::ASM::bl(fn_80154340);
/*80134650 00131450*/ PPC::Runtime::ASM::bl(fn_80154720);
/*80134654 00131454*/ PPC::Runtime::ASM::bl(fn_80154D5C);
/*80134658 00131458*/ PPC::Runtime::ASM::bl(fn_801550CC);
/*8013465C 0013145C*/ PPC::Runtime::ASM::bl(fn_80155548);
/*80134660 00131460*/ PPC::Runtime::ASM::bl(fn_8013B6F0);
/*80134664 00131464*/ PPC::Runtime::ASM::bl(fn_80161C08);
/*80134668 00131468*/ PPC::Runtime::ASM::bl(fn_80162940);
/*8013466C 0013146C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134670 00131470*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80134674 00131474*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80134678 00131478*/ PPC::Runtime::ASM::blr();
}