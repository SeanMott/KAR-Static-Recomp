//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138B10.hpp"



void fn_8017690C(PPC::Runtime::GCContext* context)
{
/*8017690C 0017370C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80176910 00173710*/ PPC::Runtime::ASM::mflr(context->r0);
/*80176914 00173714*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80176918 00173718*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017691C 0017371C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80176920 00173720*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80176924 00173724*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80176928 00173728*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xcdc);
/*8017692C 0017372C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80176930 00173730*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*80176934 00173734*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80176938 00173738*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8017693C 0017373C*/ PPC::Runtime::ASM::beq(.L_80176968);
/*80176940 00173740*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*80176944 00173744*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80176948 00173748*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*8017694C 0017374C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*80176950 00173750*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80176954 00173754*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80176958 00173758*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017695C 0017375C*/ PPC::Runtime::ASM::slwi(context->r4, context->r0, 1);
/*80176960 00173760*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0C5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80176964 00173764*/ PPC::Runtime::ASM::bl(fn_80138B10);
RUNTIME_PPC_JUMP_LABEL(.L_80176968, 0x80176968) //this is a jump label
/*80176968 00173768*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017696C 0017376C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80176970 00173770*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80176974 00173774*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80176978 00173778*/ PPC::Runtime::ASM::blr();
}