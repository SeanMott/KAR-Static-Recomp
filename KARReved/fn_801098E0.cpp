//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_killWhispy.hpp"
#include "fn_800F605C.hpp"



void fn_801098E0(PPC::Runtime::GCContext* context)
{
/*801098E0 001066E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801098E4 001066E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801098E8 001066E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801098EC 001066EC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801098F0 001066F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801098F4 001066F4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801098F8 001066F8*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801098FC 001066FC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFA9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80109900 00106700*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80109904 00106704*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80109908 00106708*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8010990C 0010670C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80109910 00106710*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80109914 00106714*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80109918 00106718*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8010991C 0010671C*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*80109920 00106720*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*80109924 00106724*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80109928 00106728*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010992C 0010672C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80109930 00106730*/ PPC::Runtime::ASM::bl(fn_800F605C);
/*80109934 00106734*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80109938 00106738*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010993C 0010673C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80109940 00106740*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80109944 00106744*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80109948 00106748*/ PPC::Runtime::ASM::blr();
}