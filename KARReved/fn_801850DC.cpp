//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8013909C.hpp"
#include "fn_80059520.hpp"



void fn_801850DC(PPC::Runtime::GCContext* context)
{
/*801850DC 00181EDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801850E0 00181EE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801850E4 00181EE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801850E8 00181EE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801850EC 00181EEC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801850F0 00181EF0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801850F4 00181EF4*/ PPC::Runtime::ASM::bl(fn_8013909C);
/*801850F8 00181EF8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AD748 @ Get_MemoryOffset_HighBit);
/*801850FC 00181EFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80185100 00181F00*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804AD748 @ Get_MemoryOffset_LowBit);
/*80185104 00181F04*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80185108 00181F08*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1184);
/*8018510C 00181F0C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80185110 00181F10*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80185114 00181F14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80185118 00181F18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8018511C 00181F1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80185120 00181F20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80185124 00181F24*/ PPC::Runtime::ASM::blr();
}