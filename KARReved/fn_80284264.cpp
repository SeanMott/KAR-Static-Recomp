//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80284264(PPC::Runtime::GCContext* context)
{
/*80284264 00281064*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80284268 00281068*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028426C 0028106C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80284270 00281070*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80284274 00281074*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80284278 00281078*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028427C 0028107C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80284280 00281080*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80284284 00281084*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80284288 00281088*/ PPC::Runtime::ASM::mfcr(context->r0);
/*8028428C 0028108C*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 2);
/*80284290 00281090*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80284294 00281094*/ PPC::Runtime::ASM::blr();
}