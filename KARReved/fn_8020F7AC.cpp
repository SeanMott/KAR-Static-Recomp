//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200D10.hpp"
#include "fn_8020F86C.hpp"



void fn_8020F7AC(PPC::Runtime::GCContext* context)
{
/*8020F7AC 0020C5AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020F7B0 0020C5B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020F7B4 0020C5B4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E251C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020F7B8 0020C5B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F7BC 0020C5BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F7C0 0020C5C0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8020F7C4 0020C5C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x554, context->r3));
/*8020F7C8 0020C5C8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020F7CC 0020C5CC*/ PPC::Runtime::ASM::bge(.L_8020F7D4);
/*8020F7D0 0020C5D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x554, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8020F7D4, 0x8020F7D4) //this is a jump label
/*8020F7D4 0020C5D4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020F7D8 0020C5D8*/ PPC::Runtime::ASM::bl(fn_80200D10);
/*8020F7DC 0020C5DC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8020F7E0 0020C5E0*/ PPC::Runtime::ASM::beq(.L_8020F7EC);
/*8020F7E4 0020C5E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020F7E8 0020C5E8*/ PPC::Runtime::ASM::bl(fn_8020F86C);
RUNTIME_PPC_JUMP_LABEL(.L_8020F7EC, 0x8020F7EC) //this is a jump label
/*8020F7EC 0020C5EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F7F0 0020C5F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F7F4 0020C5F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020F7F8 0020C5F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020F7FC 0020C5FC*/ PPC::Runtime::ASM::blr();
}