//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "EXILock.hpp"
#include "fn_readcmdLong.hpp"
#include "EXIUnlock.hpp"



void fn_804685F8(PPC::Runtime::GCContext* context)
{
/*804685F8 004653F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*804685FC 004653FC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80468600 00465400*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80468604 00465404*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80468608 00465408*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*8046860C 0046540C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80468610 00465410*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*80468614 00465414*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80468618 00465418*/ PPC::Runtime::ASM::bl(EXILock);
/*8046861C 0046541C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80468620 00465420*/ PPC::Runtime::ASM::beq(.L_80468668);
/*80468624 00465424*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xd);
/*80468628 00465428*/ PPC::Runtime::ASM::li(context->r3, 0x31);
/*8046862C 0046542C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80468630 00465430*/ PPC::Runtime::ASM::bl(fn_readcmdLong);
/*80468634 00465434*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r1));
/* 80468638 00465438  54 60 07 FF */ clrlwi. context->r0 , context->r3 , 31
/*8046863C 0046543C*/ PPC::Runtime::ASM::bne(.L_80468648);
/*80468640 00465440*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 30, 30);
/*80468644 00465444*/ PPC::Runtime::ASM::beq(.L_80468650);
RUNTIME_PPC_JUMP_LABEL(.L_80468648, 0x80468648) //this is a jump label
/*80468648 00465448*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8046864C 0046544C*/ PPC::Runtime::ASM::b(.L_80468654);
RUNTIME_PPC_JUMP_LABEL(.L_80468650, 0x80468650) //this is a jump label
/*80468650 00465450*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80468654, 0x80468654) //this is a jump label
/*80468654 00465454*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80468658 00465458*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8046865C 0046545C*/ PPC::Runtime::ASM::bl(EXIUnlock);
/*80468660 00465460*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80468664 00465464*/ PPC::Runtime::ASM::b(.L_8046866C);
RUNTIME_PPC_JUMP_LABEL(.L_80468668, 0x80468668) //this is a jump label
/*80468668 00465468*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8046866C, 0x8046866C) //this is a jump label
/*8046866C 0046546C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80468670 00465470*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80468674 00465474*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*80468678 00465478*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8046867C 0046547C*/ PPC::Runtime::ASM::blr();
}