//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"
#include "fn_802DE0E4.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802DE0E4.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_802D8AC4.hpp"
#include "fn_802D8AC4.hpp"



void fn_802DC7DC(PPC::Runtime::GCContext* context)
{
/*802DC7DC 002D95DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x160, context->r1));
/*802DC7E0 002D95E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802DC7E4 002D95E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x164, context->r1));
/*802DC7E8 002D95E8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r1));
/*802DC7EC 002D95EC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r1)0, context->qr0);
/*802DC7F0 002D95F0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r1));
/*802DC7F4 002D95F4*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r1)0, context->qr0);
/*802DC7F8 002D95F8*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r1));
/*802DC7FC 002D95FC*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r1)0, context->qr0);
/*802DC800 002D9600*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r1));
/*802DC804 002D9604*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r1)0, context->qr0);
/*802DC808 002D9608*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r1));
/*802DC80C 002D960C*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r1)0, context->qr0);
/*802DC810 002D9610*/ PPC::Runtime::ASM::stfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r1));
/*802DC814 002D9614*/ PPC::Runtime::ASM::psq_st(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1)0, context->qr0);
/*802DC818 002D9618*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r1));
/*802DC81C 002D961C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1));
/*802DC820 002D9620*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*802DC824 002D9624*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*802DC828 002D9628*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r4));
/*802DC82C 002D962C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xd0);
/*802DC830 002D9630*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802DC834 002D9634*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x88);
/*802DC838 002D9638*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*802DC83C 002D963C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r30));
/*802DC840 002D9640*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*802DC844 002D9644*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r30));
/*802DC848 002D9648*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1));
/*802DC84C 002D964C*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802DC850 002D9650*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*802DC854 002D9654*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xdc);
/*802DC858 002D9658*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*802DC85C 002D965C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1));
/*802DC860 002D9660*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r1));
/*802DC864 002D9664*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*802DC868 002D9668*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*802DC86C 002D966C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*802DC870 002D9670*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802DC874 002D9674*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3838 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DC878 002D9678*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f31);
/*802DC87C 002D967C*/ PPC::Runtime::ASM::bne(.L_802DC884);
/*802DC880 002D9680*/ PPC::Runtime::ASM::b(.L_802DCCB8);
RUNTIME_PPC_JUMP_LABEL(.L_802DC884, 0x802DC884) //this is a jump label
/*802DC884 002D9684*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802DC888 002D9688*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*802DC88C 002D968C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802DC890 002D9690*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r12));
/*802DC894 002D9694*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802DC898 002D9698*/ PPC::Runtime::ASM::bctrl();
/*802DC89C 002D969C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DC8A0 002D96A0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DC8A4 002D96A4*/ PPC::Runtime::ASM::fmr(context->f27, context->f1);
/*802DC8A8 002D96A8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DC8AC 002D96AC*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802DC8B0 002D96B0*/ PPC::Runtime::ASM::fmuls(context->f27, context->f1, context->f27);
/*802DC8B4 002D96B4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DC8B8 002D96B8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DC8BC 002D96BC*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f27);
/*802DC8C0 002D96C0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DC8C4 002D96C4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802DC8C8 002D96C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802DC8CC 002D96CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802DC8D0 002D96D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802DC8D4 002D96D4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802DC8D8 002D96D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r12));
/*802DC8DC 002D96DC*/ PPC::Runtime::ASM::fdivs(context->f26, context->f0, context->f1);
/*802DC8E0 002D96E0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802DC8E4 002D96E4*/ PPC::Runtime::ASM::bctrl();
/*802DC8E8 002D96E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DC8EC 002D96EC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DC8F0 002D96F0*/ PPC::Runtime::ASM::fmr(context->f27, context->f1);
/*802DC8F4 002D96F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DC8F8 002D96F8*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802DC8FC 002D96FC*/ PPC::Runtime::ASM::fmuls(context->f27, context->f1, context->f27);
/*802DC900 002D9700*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DC904 002D9704*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DC908 002D9708*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f27);
/*802DC90C 002D970C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DC910 002D9710*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802DC914 002D9714*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802DC918 002D9718*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f1);
/*802DC91C 002D971C*/ PPC::Runtime::ASM::fadds(context->f26, context->f26, context->f0);
/*802DC920 002D9720*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f26);
/*802DC924 002D9724*/ PPC::Runtime::ASM::bge(.L_802DCCB4);
/*802DC928 002D9728*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r31));
/*802DC92C 002D972C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc4);
/*802DC930 002D9730*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802DC934 002D9734*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x88);
/*802DC938 002D9738*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*802DC93C 002D973C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*802DC940 002D9740*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*802DC944 002D9744*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*802DC948 002D9748*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*802DC94C 002D974C*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802DC950 002D9750*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*802DC954 002D9754*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xe8);
/*802DC958 002D9758*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1));
/*802DC95C 002D975C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802DC960 002D9760*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r1));
/*802DC964 002D9764*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1));
/*802DC968 002D9768*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r1));
/*802DC96C 002D976C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r1));
/*802DC970 002D9770*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*802DC974 002D9774*/ PPC::Runtime::ASM::fsubs(context->f26, context->f26, context->f31);
/*802DC978 002D9778*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1));
/*802DC97C 002D977C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r1));
/*802DC980 002D9780*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xa0);
/*802DC984 002D9784*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r1));
/*802DC988 002D9788*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802DC98C 002D978C*/ PPC::Runtime::ASM::fmr(context->f1, context->f26);
/*802DC990 002D9790*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802DC994 002D9794*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*802DC998 002D9798*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*802DC99C 002D979C*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*802DC9A0 002D97A0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802DC9A4 002D97A4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xac);
/*802DC9A8 002D97A8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*802DC9AC 002D97AC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802DC9B0 002D97B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*802DC9B4 002D97B4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*802DC9B8 002D97B8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DC9BC 002D97BC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*802DC9C0 002D97C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*802DC9C4 002D97C4*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*802DC9C8 002D97C8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*802DC9CC 002D97CC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x88);
/*802DC9D0 002D97D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*802DC9D4 002D97D4*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802DC9D8 002D97D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*802DC9DC 002D97DC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xb8);
/*802DC9E0 002D97E0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*802DC9E4 002D97E4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*802DC9E8 002D97E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*802DC9EC 002D97EC*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*802DC9F0 002D97F0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1));
/*802DC9F4 002D97F4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x7c);
/*802DC9F8 002D97F8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r1));
/*802DC9FC 002D97FC*/ PPC::Runtime::ASM::fmr(context->f1, context->f26);
/*802DCA00 002D9800*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r1));
/*802DCA04 002D9804*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802DCA08 002D9808*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802DCA0C 002D980C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802DCA10 002D9810*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802DCA14 002D9814*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*802DCA18 002D9818*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802DCA1C 002D981C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x88);
/*802DCA20 002D9820*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802DCA24 002D9824*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802DCA28 002D9828*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802DCA2C 002D982C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802DCA30 002D9830*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3868 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCA34 002D9834*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802DCA38 002D9838*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802DCA3C 002D983C*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*802DCA40 002D9840*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802DCA44 002D9844*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x88);
/*802DCA48 002D9848*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802DCA4C 002D984C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802DCA50 002D9850*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802DCA54 002D9854*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x94);
/*802DCA58 002D9858*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802DCA5C 002D985C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*802DCA60 002D9860*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*802DCA64 002D9864*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802DCA68 002D9868*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*802DCA6C 002D986C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x64);
/*802DCA70 002D9870*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802DCA74 002D9874*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0xa0);
/*802DCA78 002D9878*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802DCA7C 002D987C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*802DCA80 002D9880*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*802DCA84 002D9884*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*802DCA88 002D9888*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*802DCA8C 002D988C*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802DCA90 002D9890*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802DCA94 002D9894*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x70);
/*802DCA98 002D9898*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*802DCA9C 002D989C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xe8);
/*802DCAA0 002D98A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*802DCAA4 002D98A4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802DCAA8 002D98A8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802DCAAC 002D98AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802DCAB0 002D98B0*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*802DCAB4 002D98B4*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802DCAB8 002D98B8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3838 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCABC 002D98BC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*802DCAC0 002D98C0*/ PPC::Runtime::ASM::bge(.L_802DCCB4);
/*802DCAC4 002D98C4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xe8);
/*802DCAC8 002D98C8*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*802DCACC 002D98CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCAD0 002D98D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x58);
/*802DCAD4 002D98D4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1));
/*802DCAD8 002D98D8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802DCADC 002D98DC*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*802DCAE0 002D98E0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r1));
/*802DCAE4 002D98E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r1));
/*802DCAE8 002D98E8*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802DCAEC 002D98EC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802DCAF0 002D98F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802DCAF4 002D98F4*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*802DCAF8 002D98F8*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802DCAFC 002D98FC*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802DCB00 002D9900*/ PPC::Runtime::ASM::lfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802DCB04 002D9904*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802DCB08 002D9908*/ PPC::Runtime::ASM::lfs(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2000, context->r3));
/*802DCB0C 002D990C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCB10 002D9910*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCB14 002D9914*/ PPC::Runtime::ASM::fmr(context->f27, context->f1);
/*802DCB18 002D9918*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCB1C 002D991C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCB20 002D9920*/ PPC::Runtime::ASM::fmuls(context->f27, context->f1, context->f27);
/*802DCB24 002D9924*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCB28 002D9928*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCB2C 002D992C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f27);
/*802DCB30 002D9930*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E386C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCB34 002D9934*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCB38 002D9938*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*802DCB3C 002D993C*/ PPC::Runtime::ASM::fmuls(context->f26, context->f26, context->f0);
/*802DCB40 002D9940*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCB44 002D9944*/ PPC::Runtime::ASM::fmr(context->f27, context->f1);
/*802DCB48 002D9948*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCB4C 002D994C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCB50 002D9950*/ PPC::Runtime::ASM::fmuls(context->f27, context->f1, context->f27);
/*802DCB54 002D9954*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCB58 002D9958*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCB5C 002D995C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f27);
/*802DCB60 002D9960*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCB64 002D9964*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*802DCB68 002D9968*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802DCB6C 002D996C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802DCB70 002D9970*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802DCB74 002D9974*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802DCB78 002D9978*/ PPC::Runtime::ASM::fdivs(context->f1, context->f26, context->f0);
/*802DCB7C 002D997C*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802DCB80 002D9980*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*802DCB84 002D9984*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802DCB88 002D9988*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*802DCB8C 002D998C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802DCB90 002D9990*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802DCB94 002D9994*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802DCB98 002D9998*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802DCB9C 002D999C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802DCBA0 002D99A0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802DCBA4 002D99A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802DCBA8 002D99A8*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*802DCBAC 002D99AC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802DCBB0 002D99B0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa0);
/*802DCBB4 002D99B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802DCBB8 002D99B8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802DCBBC 002D99BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802DCBC0 002D99C0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x4c);
/*802DCBC4 002D99C4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802DCBC8 002D99C8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802DCBCC 002D99CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802DCBD0 002D99D0*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*802DCBD4 002D99D4*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802DCBD8 002D99D8*/ PPC::Runtime::ASM::lfs(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2000, context->r3));
/*802DCBDC 002D99DC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCBE0 002D99E0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCBE4 002D99E4*/ PPC::Runtime::ASM::fmr(context->f27, context->f1);
/*802DCBE8 002D99E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCBEC 002D99EC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCBF0 002D99F0*/ PPC::Runtime::ASM::fmuls(context->f27, context->f1, context->f27);
/*802DCBF4 002D99F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCBF8 002D99F8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCBFC 002D99FC*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f27);
/*802DCC00 002D9A00*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E386C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCC04 002D9A04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCC08 002D9A08*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f2);
/*802DCC0C 002D9A0C*/ PPC::Runtime::ASM::fmuls(context->f26, context->f26, context->f0);
/*802DCC10 002D9A10*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCC14 002D9A14*/ PPC::Runtime::ASM::fmr(context->f27, context->f1);
/*802DCC18 002D9A18*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCC1C 002D9A1C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCC20 002D9A20*/ PPC::Runtime::ASM::fmuls(context->f27, context->f1, context->f27);
/*802DCC24 002D9A24*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCC28 002D9A28*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802DCC2C 002D9A2C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f27);
/*802DCC30 002D9A30*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E384C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DCC34 002D9A34*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*802DCC38 002D9A38*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802DCC3C 002D9A3C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802DCC40 002D9A40*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802DCC44 002D9A44*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802DCC48 002D9A48*/ PPC::Runtime::ASM::fdivs(context->f1, context->f26, context->f0);
/*802DCC4C 002D9A4C*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802DCC50 002D9A50*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*802DCC54 002D9A54*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802DCC58 002D9A58*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x1c);
/*802DCC5C 002D9A5C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802DCC60 002D9A60*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802DCC64 002D9A64*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802DCC68 002D9A68*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802DCC6C 002D9A6C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802DCC70 002D9A70*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802DCC74 002D9A74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DCC78 002D9A78*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*802DCC7C 002D9A7C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802DCC80 002D9A80*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xa0);
/*802DCC84 002D9A84*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802DCC88 002D9A88*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802DCC8C 002D9A8C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DCC90 002D9A90*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*802DCC94 002D9A94*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802DCC98 002D9A98*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802DCC9C 002D9A9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802DCCA0 002D9AA0*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802DCCA4 002D9AA4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802DCCA8 002D9AA8*/ PPC::Runtime::ASM::bl(fn_802D8AC4);
/*802DCCAC 002D9AAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802DCCB0 002D9AB0*/ PPC::Runtime::ASM::bl(fn_802D8AC4);
RUNTIME_PPC_JUMP_LABEL(.L_802DCCB4, 0x802DCCB4) //this is a jump label
/*802DCCB4 002D9AB4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3838 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_802DCCB8, 0x802DCCB8) //this is a jump label
/*802DCCB8 002D9AB8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r1)0, context->qr0);
/*802DCCBC 002D9ABC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r1));
/*802DCCC0 002D9AC0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r1)0, context->qr0);
/*802DCCC4 002D9AC4*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r1));
/*802DCCC8 002D9AC8*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r1)0, context->qr0);
/*802DCCCC 002D9ACC*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r1));
/*802DCCD0 002D9AD0*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r1)0, context->qr0);
/*802DCCD4 002D9AD4*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r1));
/*802DCCD8 002D9AD8*/ PPC::Runtime::ASM::psq_l(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x118, context->r1)0, context->qr0);
/*802DCCDC 002D9ADC*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r1));
/*802DCCE0 002D9AE0*/ PPC::Runtime::ASM::psq_l(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1)0, context->qr0);
/*802DCCE4 002D9AE4*/ PPC::Runtime::ASM::lfd(context->f26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r1));
/*802DCCE8 002D9AE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r1));
/*802DCCEC 002D9AEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x164, context->r1));
/*802DCCF0 002D9AF0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1));
/*802DCCF4 002D9AF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802DCCF8 002D9AF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x160);
/*802DCCFC 002D9AFC*/ PPC::Runtime::ASM::blr();
}