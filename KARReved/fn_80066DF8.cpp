//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80066DF8(PPC::Runtime::GCContext* context)
{
/*80066DF8 00063BF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80066DFC 00063BFC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80066E00 00063C00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80066E04 00063C04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80066E08 00063C08*/ PPC::Runtime::ASM::bl(fn_HSD_CObjLoadDesc);
/*80066E0C 00063C0C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80066E10 00063C10*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80066E14 00063C14*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetViewportf);
/*80066E18 00063C18*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80066E1C 00063C1C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80066E20 00063C20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80066E24 00063C24*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80066E28 00063C28*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80066E2C 00063C2C*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f0);
/*80066E30 00063C30*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEB24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80066E34 00063C34*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*80066E38 00063C38*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DEB20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80066E3C 00063C3C*/ PPC::Runtime::ASM::fdivs(context->f1, context->f3, context->f1);
/*80066E40 00063C40*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*80066E44 00063C44*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f0);
/*80066E48 00063C48*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetAspect);
/*80066E4C 00063C4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80066E50 00063C50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80066E54 00063C54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80066E58 00063C58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80066E5C 00063C5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80066E60 00063C60*/ PPC::Runtime::ASM::blr();
}