//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114904.hpp"
#include "fn_8011BA1C.hpp"
#include "fn_8011BA1C.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"



void fn_8011BD04(PPC::Runtime::GCContext* context)
{
/*8011BD04 00118B04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8011BD08 00118B08*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011BD0C 00118B0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011BD10 00118B10*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8011BD14 00118B14*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8011BD18 00118B18*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8011BD1C 00118B1C*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8011BD20 00118B20*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011BD24 00118B24*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x26c);
/*8011BD28 00118B28*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8011BD2C 00118B2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8011BD30 00118B30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8011BD34 00118B34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8011BD38 00118B38*/ PPC::Runtime::ASM::bl(fn_80114904);
/*8011BD3C 00118B3C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8011BD40 00118B40*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8011BD44 00118B44*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8011BD48 00118B48*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8011BD4C 00118B4C*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8011BD50 00118B50*/ PPC::Runtime::ASM::lis(context->r4, fn_8011BA1C @ Get_MemoryOffset_HighBit);
/*8011BD54 00118B54*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011BD58 00118B58*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8011BA1C @ Get_MemoryOffset_LowBit);
/*8011BD5C 00118B5C*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*8011BD60 00118B60*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8011BD64 00118B64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFCC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8011BD68 00118B68*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8011BD6C 00118B6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8011BD70 00118B70*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8011BD74 00118B74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8011BD78 00118B78*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*8011BD7C 00118B7C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011BD80 00118B80*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*8011BD84 00118B84*/ PPC::Runtime::ASM::mr(context->r6, context->r28);
/*8011BD88 00118B88*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*8011BD8C 00118B8C*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*8011BD90 00118B90*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8011BD94 00118B94*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8011BD98 00118B98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8011BD9C 00118B9C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011BDA0 00118BA0*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8011BDA4 00118BA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8011BDA8 00118BA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8011BDAC 00118BAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8011BDB0 00118BB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8011BDB4 00118BB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8011BDB8 00118BB8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011BDBC 00118BBC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*8011BDC0 00118BC0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011BDC4 00118BC4*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8011BDC8 00118BC8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011BDCC 00118BCC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8011BDD0 00118BD0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011BDD4 00118BD4*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8011BDD8 00118BD8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011BDDC 00118BDC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8011BDE0 00118BE0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011BDE4 00118BE4*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8011BDE8 00118BE8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011BDEC 00118BEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8011BDF0 00118BF0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011BDF4 00118BF4*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8011BDF8 00118BF8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011BDFC 00118BFC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8011BE00 00118C00*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011BE04 00118C04*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8011BE08 00118C08*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8011BE0C 00118C0C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8011BE10 00118C10*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8011BE14 00118C14*/ PPC::Runtime::ASM::slwi(context->r0, context->r28, 2);
/*8011BE18 00118C18*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8011BE1C 00118C1C*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*8011BE20 00118C20*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8011BE24 00118C24*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8011BE28 00118C28*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8011BE2C 00118C2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011BE30 00118C30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011BE34 00118C34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8011BE38 00118C38*/ PPC::Runtime::ASM::blr();
}