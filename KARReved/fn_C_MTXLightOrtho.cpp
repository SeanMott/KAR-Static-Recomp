//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_C_MTXLightOrtho(PPC::Runtime::GCContext* context)
{
/*803D1D64 003CEB64*/ PPC::Runtime::ASM::fsubs(context->f10, context->f4, context->f3);
/*803D1D68 003CEB68*/ PPC::Runtime::ASM::lfs(context->f11, STRUCT_FLOAT_COUNT_1805E58B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D1D6C 003CEB6C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f2);
/*803D1D70 003CEB70*/ PPC::Runtime::ASM::lfs(context->f9, STRUCT_FLOAT_COUNT_1805E58C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D1D74 003CEB74*/ PPC::Runtime::ASM::fadds(context->f3, context->f4, context->f3);
/*803D1D78 003CEB78*/ PPC::Runtime::ASM::fdivs(context->f12, context->f11, context->f10);
/*803D1D7C 003CEB7C*/ PPC::Runtime::ASM::fdivs(context->f10, context->f11, context->f0);
/*803D1D80 003CEB80*/ PPC::Runtime::ASM::fmuls(context->f4, context->f9, context->f12);
/*803D1D84 003CEB84*/ PPC::Runtime::ASM::fneg(context->f3, context->f3);
/*803D1D88 003CEB88*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f2);
/*803D1D8C 003CEB8C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f4, context->f5);
/*803D1D90 003CEB90*/ PPC::Runtime::ASM::fmuls(context->f2, context->f12, context->f3);
/*803D1D94 003CEB94*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*803D1D98 003CEB98*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803D1D9C 003CEB9C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f9, context->f10);
/*803D1DA0 003CEBA0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f5, context->f2);
/*803D1DA4 003CEBA4*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E58B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D1DA8 003CEBA8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f10, context->f0);
/*803D1DAC 003CEBAC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803D1DB0 003CEBB0*/ PPC::Runtime::ASM::fadds(context->f2, context->f7, context->f2);
/*803D1DB4 003CEBB4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f6);
/*803D1DB8 003CEBB8*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803D1DBC 003CEBBC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f6, context->f0);
/*803D1DC0 003CEBC0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803D1DC4 003CEBC4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*803D1DC8 003CEBC8*/ PPC::Runtime::ASM::fadds(context->f0, context->f8, context->f0);
/*803D1DCC 003CEBCC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803D1DD0 003CEBD0*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*803D1DD4 003CEBD4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*803D1DD8 003CEBD8*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*803D1DDC 003CEBDC*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*803D1DE0 003CEBE0*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*803D1DE4 003CEBE4*/ PPC::Runtime::ASM::stfs(context->f11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*803D1DE8 003CEBE8*/ PPC::Runtime::ASM::blr();
}