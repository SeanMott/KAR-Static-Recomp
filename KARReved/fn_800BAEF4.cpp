//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800BAEF4(PPC::Runtime::GCContext* context)
{
/*800BAEF4 000B7CF4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800BAEF8 000B7CF8*/ PPC::Runtime::ASM::fneg(context->f0, context->f1);
/*800BAEFC 000B7CFC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*800BAF00 000B7D00*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800BAF04 000B7D04*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*800BAF08 000B7D08*/ PPC::Runtime::ASM::fsubs(context->f4, context->f4, context->f3);
/*800BAF0C 000B7D0C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800BAF10 000B7D10*/ PPC::Runtime::ASM::fsubs(context->f5, context->f6, context->f5);
/*800BAF14 000B7D14*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800BAF18 000B7D18*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*800BAF1C 000B7D1C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f4, context->f3);
/*800BAF20 000B7D20*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800BAF24 000B7D24*/ PPC::Runtime::ASM::fsubs(context->f6, context->f7, context->f6);
/*800BAF28 000B7D28*/ PPC::Runtime::ASM::fmadds(context->f3, context->f5, context->f4, context->f3);
/*800BAF2C 000B7D2C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800BAF30 000B7D30*/ PPC::Runtime::ASM::fmadds(context->f3, context->f6, context->f4, context->f3);
/*800BAF34 000B7D34*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*800BAF38 000B7D38*/ PPC::Runtime::ASM::bge(.L_800BAF44);
/*800BAF3C 000B7D3C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF264 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BAF40 000B7D40*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800BAF44, 0x800BAF44) //this is a jump label
/*800BAF44 000B7D44*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*800BAF48 000B7D48*/ PPC::Runtime::ASM::ble(.L_800BAF60);
/*800BAF4C 000B7D4C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF280 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800BAF50 000B7D50*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*800BAF54 000B7D54*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*800BAF58 000B7D58*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f3);
/*800BAF5C 000B7D5C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800BAF60, 0x800BAF60) //this is a jump label
/*800BAF60 000B7D60*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*800BAF64 000B7D64*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800BAF68 000B7D68*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
/*800BAF6C 000B7D6C*/ PPC::Runtime::ASM::blr();
}