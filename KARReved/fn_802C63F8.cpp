//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B57F4.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"



void fn_802C63F8(PPC::Runtime::GCContext* context)
{
/*802C63F8 002C31F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802C63FC 002C31FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802C6400 002C3200*/ PPC::Runtime::ASM::lis(context->r4, lbl_804CF988 @ Get_MemoryOffset_HighBit);
/*802C6404 002C3204*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802C6408 002C3208*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802C640C 002C320C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_804CF988 @ Get_MemoryOffset_LowBit);
/*802C6410 002C3210*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x464);
/*802C6414 002C3214*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802C6418 002C3218*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802C641C 002C321C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802C6420 002C3220*/ PPC::Runtime::ASM::bl(fn_802B57F4);
/*802C6424 002C3224*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BB9D4 @ Get_MemoryOffset_HighBit);
/*802C6428 002C3228*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BB9D4 @ Get_MemoryOffset_LowBit);
/*802C642C 002C322C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802C6430 002C3230*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x10);
/*802C6434 002C3234*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x58);
/*802C6438 002C3238*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802C643C 002C323C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*802C6440 002C3240*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802C6444 002C3244*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802C6448 002C3248*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C644C 002C324C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3598 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C6450 002C3250*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x1ac);
/*802C6454 002C3254*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x410);
/*802C6458 002C3258*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x84c);
/*802C645C 002C325C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C6460 002C3260*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*802C6464 002C3264*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802C6468 002C3268*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802C646C 002C326C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C6470 002C3270*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3598 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C6474 002C3274*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x2b0);
/*802C6478 002C3278*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x41c);
/*802C647C 002C327C*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x850);
/*802C6480 002C3280*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C6484 002C3284*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*802C6488 002C3288*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802C648C 002C328C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802C6490 002C3290*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C6494 002C3294*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3598 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C6498 002C3298*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x3b4);
/*802C649C 002C329C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x428);
/*802C64A0 002C32A0*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x854);
/*802C64A4 002C32A4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C64A8 002C32A8*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*802C64AC 002C32AC*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802C64B0 002C32B0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802C64B4 002C32B4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C64B8 002C32B8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3598 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C64BC 002C32BC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x4b8);
/*802C64C0 002C32C0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x434);
/*802C64C4 002C32C4*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x858);
/*802C64C8 002C32C8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C64CC 002C32CC*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*802C64D0 002C32D0*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802C64D4 002C32D4*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802C64D8 002C32D8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C64DC 002C32DC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3598 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C64E0 002C32E0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x5bc);
/*802C64E4 002C32E4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x440);
/*802C64E8 002C32E8*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x85c);
/*802C64EC 002C32EC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C64F0 002C32F0*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*802C64F4 002C32F4*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802C64F8 002C32F8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802C64FC 002C32FC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C6500 002C3300*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3598 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C6504 002C3304*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x6c0);
/*802C6508 002C3308*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x44c);
/*802C650C 002C330C*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x860);
/*802C6510 002C3310*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C6514 002C3314*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*802C6518 002C3318*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*802C651C 002C331C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802C6520 002C3320*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C6524 002C3324*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3598 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802C6528 002C3328*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x7c4);
/*802C652C 002C332C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x458);
/*802C6530 002C3330*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x864);
/*802C6534 002C3334*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802C6538 002C3338*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*802C653C 002C333C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x1b4);
/*802C6540 002C3340*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x16c);
/*802C6544 002C3344*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r29));
/*802C6548 002C3348*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C654C 002C334C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C6550 002C3350*/ PPC::Runtime::ASM::bctrl();
/*802C6554 002C3354*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x2b8);
/*802C6558 002C3358*/ PPC::Runtime::ASM::addi(context->r30, context->r29, 0x16c);
/*802C655C 002C335C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r29));
/*802C6560 002C3360*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802C6564 002C3364*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C6568 002C3368*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C656C 002C336C*/ PPC::Runtime::ASM::bctrl();
/*802C6570 002C3370*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x3bc);
/*802C6574 002C3374*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802C6578 002C3378*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3bc, context->r29));
/*802C657C 002C337C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C6580 002C3380*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C6584 002C3384*/ PPC::Runtime::ASM::bctrl();
/*802C6588 002C3388*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c0, context->r29));
/*802C658C 002C338C*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
/*802C6590 002C3390*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x4c0);
/*802C6594 002C3394*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C6598 002C3398*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802C659C 002C339C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C65A0 002C33A0*/ PPC::Runtime::ASM::bctrl();
/*802C65A4 002C33A4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x5c4);
/*802C65A8 002C33A8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802C65AC 002C33AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c4, context->r29));
/*802C65B0 002C33B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C65B4 002C33B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C65B8 002C33B8*/ PPC::Runtime::ASM::bctrl();
/*802C65BC 002C33BC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x6c8);
/*802C65C0 002C33C0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802C65C4 002C33C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c8, context->r29));
/*802C65C8 002C33C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C65CC 002C33CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C65D0 002C33D0*/ PPC::Runtime::ASM::bctrl();
/*802C65D4 002C33D4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x7cc);
/*802C65D8 002C33D8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802C65DC 002C33DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7cc, context->r29));
/*802C65E0 002C33E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802C65E4 002C33E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802C65E8 002C33E8*/ PPC::Runtime::ASM::bctrl();
/*802C65EC 002C33EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802C65F0 002C33F0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802C65F4 002C33F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802C65F8 002C33F8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802C65FC 002C33FC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802C6600 002C3400*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802C6604 002C3404*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802C6608 002C3408*/ PPC::Runtime::ASM::blr();
}