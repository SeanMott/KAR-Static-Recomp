//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005B924.hpp"
#include "fn_8005BA38.hpp"
#include "fn_8005C298.hpp"
#include "fn_80059CFC.hpp"
#include "fn_80059CFC.hpp"



void fn_8005A608(PPC::Runtime::GCContext* context)
{
/*8005A608 00057408*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005A60C 0005740C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005A610 00057410*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005A614 00057414*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8005A618 00057418*/ PPC::Runtime::ASM::bl(fn_8005B924);
/*8005A61C 0005741C*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8005A620 00057420*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8005A624 00057424*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*8005A628 00057428*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8005A62C 0005742C*/ PPC::Runtime::ASM::bl(fn_8005BA38);
/*8005A630 00057430*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*8005A634 00057434*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005A638 00057438*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8005A63C 0005743C*/ PPC::Runtime::ASM::bl(fn_8005C298);
/*8005A640 00057440*/ PPC::Runtime::ASM::lis(context->r3, fn_80059CFC @ Get_MemoryOffset_HighBit);
/*8005A644 00057444*/ PPC::Runtime::ASM::addi(context->r3, context->r3, fn_80059CFC @ Get_MemoryOffset_LowBit);
/*8005A648 00057448*/ PPC::Runtime::ASM::bl(fn_80448220);
/*8005A64C 0005744C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005A650 00057450*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8005A654 00057454*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005A658 00057458*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005A65C 0005745C*/ PPC::Runtime::ASM::blr();
}