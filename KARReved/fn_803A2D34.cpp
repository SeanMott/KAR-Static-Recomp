//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803A2CEC.hpp"



void fn_803A2D34(PPC::Runtime::GCContext* context)
{
/*803A2D34 0039FB34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803A2D38 0039FB38*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A2D3C 0039FB3C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803A2D40 0039FB40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A2D44 0039FB44*/ PPC::Runtime::ASM::bl(fn_GXSetNumTexGens);
/*803A2D48 0039FB48*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803A2D4C 0039FB4C*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*803A2D50 0039FB50*/ PPC::Runtime::ASM::li(context->r5, 0x100);
/*803A2D54 0039FB54*/ PPC::Runtime::ASM::li(context->r6, 0xff);
/*803A2D58 0039FB58*/ PPC::Runtime::ASM::bl(fn_GXSetTevOrder);
/*803A2D5C 0039FB5C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803A2D60 0039FB60*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*803A2D64 0039FB64*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*803A2D68 0039FB68*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803A2D6C 0039FB6C*/ PPC::Runtime::ASM::bl(fn_GXSetBlendMode);
/*803A2D70 0039FB70*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803A2D74 0039FB74*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*803A2D78 0039FB78*/ PPC::Runtime::ASM::li(context->r5, 0xf);
/*803A2D7C 0039FB7C*/ PPC::Runtime::ASM::li(context->r6, 0xc);
/*803A2D80 0039FB80*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*803A2D84 0039FB84*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorIn);
/*803A2D88 0039FB88*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803A2D8C 0039FB8C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A2D90 0039FB90*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803A2D94 0039FB94*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803A2D98 0039FB98*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*803A2D9C 0039FB9C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803A2DA0 0039FBA0*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorOp);
/*803A2DA4 0039FBA4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803A2DA8 0039FBA8*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*803A2DAC 0039FBAC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A2DB0 0039FBB0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*803A2DB4 0039FBB4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803A2DB8 0039FBB8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*803A2DBC 0039FBBC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*803A2DC0 0039FBC0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*803A2DC4 0039FBC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A2DC8 0039FBC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A2DCC 0039FBCC*/ PPC::Runtime::ASM::bl(fn_GXSetTevColor);
/*803A2DD0 0039FBD0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803A2DD4 0039FBD4*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*803A2DD8 0039FBD8*/ PPC::Runtime::ASM::li(context->r5, 0x7);
/*803A2DDC 0039FBDC*/ PPC::Runtime::ASM::li(context->r6, 0x7);
/*803A2DE0 0039FBE0*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*803A2DE4 0039FBE4*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaIn);
/*803A2DE8 0039FBE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803A2DEC 0039FBEC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A2DF0 0039FBF0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803A2DF4 0039FBF4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*803A2DF8 0039FBF8*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*803A2DFC 0039FBFC*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*803A2E00 0039FC00*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaOp);
/*803A2E04 0039FC04*/ PPC::Runtime::ASM::bl(fn_803A2CEC);
/*803A2E08 0039FC08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A2E0C 0039FC0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A2E10 0039FC10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803A2E14 0039FC14*/ PPC::Runtime::ASM::blr();
}