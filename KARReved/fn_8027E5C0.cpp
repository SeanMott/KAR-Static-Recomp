//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8027E5C0(PPC::Runtime::GCContext* context)
{
/*8027E5C0 0027B3C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8027E5C4 0027B3C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8027E5C8 0027B3C8*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8027E5CC 0027B3CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027E5D0 0027B3D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8027E5D4 0027B3D4*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD908 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027E5D8 0027B3D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*8027E5DC 0027B3DC*/ PPC::Runtime::ASM::bl(fn_LooseBallAnims_GetDesperationInfo_TakeParam_UnsignedInt);
/*8027E5E0 0027B3E0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8027E5E4 0027B3E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8027E5E8 0027B3E8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8027E5EC 0027B3EC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8027E5F0 0027B3F0*/ PPC::Runtime::ASM::bl(fn_8040A7B8);
/*8027E5F4 0027B3F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027E5F8 0027B3F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8027E5FC 0027B3FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8027E600 0027B400*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8027E604 0027B404*/ PPC::Runtime::ASM::blr();
}