//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80250788(PPC::Runtime::GCContext* context)
{
/*80250788 0024D588*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025078C 0024D58C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80250790 0024D590*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80250794 0024D594*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80250798 0024D598*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
/*8025079C 0024D59C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802507A0 0024D5A0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802507A4 0024D5A4*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f0);
/*802507A8 0024D5A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802507AC 0024D5AC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f1);
/*802507B0 0024D5B0*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f0);
/*802507B4 0024D5B4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2C80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802507B8 0024D5B8*/ PPC::Runtime::ASM::fmadds(context->f1, context->f3, context->f3, context->f1);
/*802507BC 0024D5BC*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f2, context->f1);
/*802507C0 0024D5C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802507C4 0024D5C4*/ PPC::Runtime::ASM::ble(.L_80250814);
/*802507C8 0024D5C8*/ PPC::Runtime::ASM::frsqrte(context->f2, context->f1);
/*802507CC 0024D5CC*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805E2C88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802507D0 0024D5D0*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E2C90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802507D4 0024D5D4*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*802507D8 0024D5D8*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*802507DC 0024D5DC*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*802507E0 0024D5E0*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*802507E4 0024D5E4*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*802507E8 0024D5E8*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*802507EC 0024D5EC*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*802507F0 0024D5F0*/ PPC::Runtime::ASM::fmul(context->f2, context->f2, context->f0);
/*802507F4 0024D5F4*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f2);
/*802507F8 0024D5F8*/ PPC::Runtime::ASM::fmul(context->f2, context->f4, context->f2);
/*802507FC 0024D5FC*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f1, context->f0, context->f3);
/*80250800 0024D600*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f0);
/*80250804 0024D604*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*80250808 0024D608*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*8025080C 0024D60C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80250810 0024D610*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80250814, 0x80250814) //this is a jump label
/*80250814 0024D614*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80250818 0024D618*/ PPC::Runtime::ASM::blr();
}