//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801CAB94(PPC::Runtime::GCContext* context)
{
/*801CAB94 001C7994*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1A00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CAB98 001C7998*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f2);
/*801CAB9C 001C799C*/ PPC::Runtime::ASM::beq(.L_801CABCC);
/*801CABA0 001C79A0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f2);
/*801CABA4 001C79A4*/ PPC::Runtime::ASM::ble(.L_801CABB8);
/*801CABA8 001C79A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801CABAC 001C79AC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801CABB0 001C79B0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f2);
/*801CABB4 001C79B4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_801CABB8, 0x801CABB8) //this is a jump label
/*801CABB8 001C79B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801CABBC 001C79BC*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
/*801CABC0 001C79C0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801CABC4 001C79C4*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f2);
/*801CABC8 001C79C8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_801CABCC, 0x801CABCC) //this is a jump label
/*801CABCC 001C79CC*/ PPC::Runtime::ASM::fmr(context->f1, context->f2);
/*801CABD0 001C79D0*/ PPC::Runtime::ASM::blr();
}