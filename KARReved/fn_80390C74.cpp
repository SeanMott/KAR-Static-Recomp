//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80390C74(PPC::Runtime::GCContext* context)
{
/*80390C74 0038DA74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80390C78 0038DA78*/ PPC::Runtime::ASM::mflr(context->r0);
/*80390C7C 0038DA7C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80390C80 0038DA80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80390C84 0038DA84*/ PPC::Runtime::ASM::bl(fn_GXSetNumChans);
/*80390C88 0038DA88*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80390C8C 0038DA8C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80390C90 0038DA90*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80390C94 0038DA94*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80390C98 0038DA98*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80390C9C 0038DA9C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80390CA0 0038DAA0*/ PPC::Runtime::ASM::li(context->r9, 0x2);
/*80390CA4 0038DAA4*/ PPC::Runtime::ASM::bl(fn_GXSetChanCtrl);
/*80390CA8 0038DAA8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80390CAC 0038DAAC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80390CB0 0038DAB0*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80390CB4 0038DAB4*/ PPC::Runtime::ASM::li(context->r6, 0x3c);
/*80390CB8 0038DAB8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80390CBC 0038DABC*/ PPC::Runtime::ASM::li(context->r8, 0x7d);
/*80390CC0 0038DAC0*/ PPC::Runtime::ASM::bl(fn_GXSetTexCoordGen2);
/*80390CC4 0038DAC4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80390CC8 0038DAC8*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80390CCC 0038DACC*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*80390CD0 0038DAD0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80390CD4 0038DAD4*/ PPC::Runtime::ASM::bl(fn_GXSetBlendMode);
/*80390CD8 0038DAD8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80390CDC 0038DADC*/ PPC::Runtime::ASM::bl(fn_GXSetNumTexGens);
/*80390CE0 0038DAE0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80390CE4 0038DAE4*/ PPC::Runtime::ASM::bl(fn_GXSetNumTevStages);
/*80390CE8 0038DAE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80390CEC 0038DAEC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80390CF0 0038DAF0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80390CF4 0038DAF4*/ PPC::Runtime::ASM::li(context->r6, 0xff);
/*80390CF8 0038DAF8*/ PPC::Runtime::ASM::bl(fn_GXSetTevOrder);
/*80390CFC 0038DAFC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80390D00 0038DB00*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80390D04 0038DB04*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*80390D08 0038DB08*/ PPC::Runtime::ASM::li(context->r6, 0x2);
/*80390D0C 0038DB0C*/ PPC::Runtime::ASM::li(context->r7, 0xf);
/*80390D10 0038DB10*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorIn);
/*80390D14 0038DB14*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80390D18 0038DB18*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80390D1C 0038DB1C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80390D20 0038DB20*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80390D24 0038DB24*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80390D28 0038DB28*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80390D2C 0038DB2C*/ PPC::Runtime::ASM::bl(fn_GXSetTevColorOp);
/*80390D30 0038DB30*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80390D34 0038DB34*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*80390D38 0038DB38*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80390D3C 0038DB3C*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80390D40 0038DB40*/ PPC::Runtime::ASM::li(context->r7, 0x7);
/*80390D44 0038DB44*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaIn);
/*80390D48 0038DB48*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80390D4C 0038DB4C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80390D50 0038DB50*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80390D54 0038DB54*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80390D58 0038DB58*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80390D5C 0038DB5C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80390D60 0038DB60*/ PPC::Runtime::ASM::bl(fn_GXSetTevAlphaOp);
/*80390D64 0038DB64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80390D68 0038DB68*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80390D6C 0038DB6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80390D70 0038DB70*/ PPC::Runtime::ASM::blr();
}