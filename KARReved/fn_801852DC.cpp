//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801852DC(PPC::Runtime::GCContext* context)
{
/*801852DC 001820DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801852E0 001820E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801852E4 001820E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801852E8 001820E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801852EC 001820EC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801852F0 001820F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1190, context->r3));
/*801852F4 001820F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801852F8 001820F8*/ PPC::Runtime::ASM::beq(.L_80185314);
/*801852FC 001820FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80185300 00182100*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0ECC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80185304 00182104*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80185308 00182108*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*8018530C 0018210C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80185310 00182110*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_80185314, 0x80185314) //this is a jump label
/*80185314 00182114*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80185318 00182118*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8018531C 0018211C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80185320 00182120*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80185324 00182124*/ PPC::Runtime::ASM::blr();
}