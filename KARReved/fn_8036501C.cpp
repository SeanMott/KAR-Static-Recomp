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
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_802889EC.hpp"
#include "fn_802889EC.hpp"



void fn_8036501C(PPC::Runtime::GCContext* context)
{
/*8036501C 00361E1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80365020 00361E20*/ PPC::Runtime::ASM::mflr(context->r0);
/*80365024 00361E24*/ PPC::Runtime::ASM::lis(context->r4, lbl_804EBCB0 @ Get_MemoryOffset_HighBit);
/*80365028 00361E28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8036502C 00361E2C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80365030 00361E30*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80365034 00361E34*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80365038 00361E38*/ PPC::Runtime::ASM::addi(context->r30, context->r4, lbl_804EBCB0 @ Get_MemoryOffset_LowBit);
/*8036503C 00361E3C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x878);
/*80365040 00361E40*/ PPC::Runtime::ASM::bl(fn_802B57F4);
/*80365044 00361E44*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C2664 @ Get_MemoryOffset_HighBit);
/*80365048 00361E48*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804C2664 @ Get_MemoryOffset_LowBit);
/*8036504C 00361E4C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80365050 00361E50*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x10);
/*80365054 00361E54*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x58);
/*80365058 00361E58*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8036505C 00361E5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80365060 00361E60*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80365064 00361E64*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80365068 00361E68*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036506C 00361E6C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80365070 00361E70*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1ac);
/*80365074 00361E74*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x4d4);
/*80365078 00361E78*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x2ec);
/*8036507C 00361E7C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80365080 00361E80*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*80365084 00361E84*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80365088 00361E88*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8036508C 00361E8C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80365090 00361E90*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80365094 00361E94*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2b0);
/*80365098 00361E98*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x4e4);
/*8036509C 00361E9C*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x2f0);
/*803650A0 00361EA0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803650A4 00361EA4*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803650A8 00361EA8*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803650AC 00361EAC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803650B0 00361EB0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803650B4 00361EB4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803650B8 00361EB8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3b4);
/*803650BC 00361EBC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x4f8);
/*803650C0 00361EC0*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x2f4);
/*803650C4 00361EC4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803650C8 00361EC8*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803650CC 00361ECC*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803650D0 00361ED0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803650D4 00361ED4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803650D8 00361ED8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803650DC 00361EDC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4b8);
/*803650E0 00361EE0*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x510);
/*803650E4 00361EE4*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x2f8);
/*803650E8 00361EE8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803650EC 00361EEC*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803650F0 00361EF0*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803650F4 00361EF4*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803650F8 00361EF8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803650FC 00361EFC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80365100 00361F00*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5bc);
/*80365104 00361F04*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x528);
/*80365108 00361F08*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x2fc);
/*8036510C 00361F0C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80365110 00361F10*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*80365114 00361F14*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80365118 00361F18*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8036511C 00361F1C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80365120 00361F20*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4744 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80365124 00361F24*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x6c0);
/*80365128 00361F28*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x888);
/*8036512C 00361F2C*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x300);
/*80365130 00361F30*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80365134 00361F34*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*80365138 00361F38*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036513C 00361F3C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80365140 00361F40*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80365144 00361F44*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4744 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80365148 00361F48*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x7c4);
/*8036514C 00361F4C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x898);
/*80365150 00361F50*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x304);
/*80365154 00361F54*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80365158 00361F58*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*8036515C 00361F5C*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80365160 00361F60*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80365164 00361F64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80365168 00361F68*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4744 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036516C 00361F6C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8c8);
/*80365170 00361F70*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x8ac);
/*80365174 00361F74*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x308);
/*80365178 00361F78*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8036517C 00361F7C*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*80365180 00361F80*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80365184 00361F84*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80365188 00361F88*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036518C 00361F8C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4744 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80365190 00361F90*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x9cc);
/*80365194 00361F94*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x8c0);
/*80365198 00361F98*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x30c);
/*8036519C 00361F9C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803651A0 00361FA0*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803651A4 00361FA4*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803651A8 00361FA8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803651AC 00361FAC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E475C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803651B0 00361FB0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4738 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803651B4 00361FB4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xad0);
/*803651B8 00361FB8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x80c);
/*803651BC 00361FBC*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x310);
/*803651C0 00361FC0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803651C4 00361FC4*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803651C8 00361FC8*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803651CC 00361FCC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803651D0 00361FD0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E475C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803651D4 00361FD4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4738 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803651D8 00361FD8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xbd4);
/*803651DC 00361FDC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x820);
/*803651E0 00361FE0*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x314);
/*803651E4 00361FE4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803651E8 00361FE8*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803651EC 00361FEC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1b4);
/*803651F0 00361FF0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*803651F4 00361FF4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r31));
/*803651F8 00361FF8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803651FC 00361FFC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80365200 00362000*/ PPC::Runtime::ASM::bctrl();
/*80365204 00362004*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2b8);
/*80365208 00362008*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0x16c);
/*8036520C 0036200C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r31));
/*80365210 00362010*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80365214 00362014*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80365218 00362018*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036521C 0036201C*/ PPC::Runtime::ASM::bctrl();
/*80365220 00362020*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3bc);
/*80365224 00362024*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80365228 00362028*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3bc, context->r31));
/*8036522C 0036202C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80365230 00362030*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80365234 00362034*/ PPC::Runtime::ASM::bctrl();
/*80365238 00362038*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c0, context->r31));
/*8036523C 0036203C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4c0);
/*80365240 00362040*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80365244 00362044*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80365248 00362048*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036524C 0036204C*/ PPC::Runtime::ASM::bctrl();
/*80365250 00362050*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5c4);
/*80365254 00362054*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80365258 00362058*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c4, context->r31));
/*8036525C 0036205C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80365260 00362060*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80365264 00362064*/ PPC::Runtime::ASM::bctrl();
/*80365268 00362068*/ PPC::Runtime::ASM::li(context->r3, 0x30);
/*8036526C 0036206C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*80365270 00362070*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80365274 00362074*/ PPC::Runtime::ASM::beq(.L_80365354);
/*80365278 00362078*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*8036527C 0036207C*/ PPC::Runtime::ASM::lis(context->r8, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*80365280 00362080*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*80365284 00362084*/ PPC::Runtime::ASM::lis(context->r7, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*80365288 00362088*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8036528C 0036208C*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*80365290 00362090*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*80365294 00362094*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*80365298 00362098*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8036529C 0036209C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C75F4 @ Get_MemoryOffset_HighBit);
/*803652A0 003620A0*/ PPC::Runtime::ASM::li(context->r0, String_ "border" 5 @ Get_MemoryOffset_SDA21);
/*803652A4 003620A4*/ PPC::Runtime::ASM::addi(context->r9, context->r8, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*803652A8 003620A8*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803652AC 003620AC*/ PPC::Runtime::ASM::addi(context->r8, context->r7, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*803652B0 003620B0*/ PPC::Runtime::ASM::addi(context->r11, context->r3, 0x28);
/*803652B4 003620B4*/ PPC::Runtime::ASM::addi(context->r7, context->r6, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*803652B8 003620B8*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803652BC 003620BC*/ PPC::Runtime::ASM::addi(context->r6, context->r5, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*803652C0 003620C0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803652C4 003620C4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804C75F4 @ Get_MemoryOffset_LowBit);
/*803652C8 003620C8*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*803652CC 003620CC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803652D0 003620D0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803652D4 003620D4*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803652D8 003620D8*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803652DC 003620DC*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*803652E0 003620E0*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r3));
/*803652E4 003620E4*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*803652E8 003620E8*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*803652EC 003620EC*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*803652F0 003620F0*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*803652F4 003620F4*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803652F8 003620F8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*803652FC 003620FC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80365300 00362100*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80365304 00362104*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*80365308 00362108*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8036530C 0036210C*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*80365310 00362110*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80365314 00362114*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*80365318 00362118*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8036531C 0036211C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80365320 00362120*/ PPC::Runtime::ASM::beq(.L_8036534C);
/*80365324 00362124*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80365328 00362128*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036532C 0036212C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB4A8 @ Get_MemoryOffset_SDA21);
/*80365330 00362130*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB4A0 @ Get_MemoryOffset_SDA21);
/*80365334 00362134*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80365338 00362138*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8036533C 0036213C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*80365340 00362140*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*80365344 00362144*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*80365348 00362148*/ PPC::Runtime::ASM::addi(context->r10, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8036534C, 0x8036534C) //this is a jump label
/*8036534C 0036214C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80365350 00362150*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_80365354, 0x80365354) //this is a jump label
/*80365354 00362154*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80365358 00362158*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*8036535C 0036215C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80365360 00362160*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80365364 00362164*/ PPC::Runtime::ASM::bctrl();
/*80365368 00362168*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x6c8);
/*8036536C 0036216C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*80365370 00362170*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c8, context->r31));
/*80365374 00362174*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80365378 00362178*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036537C 0036217C*/ PPC::Runtime::ASM::bctrl();
/*80365380 00362180*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x7cc);
/*80365384 00362184*/ PPC::Runtime::ASM::addi(context->r30, context->r31, 0x16c);
/*80365388 00362188*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7cc, context->r31));
/*8036538C 0036218C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80365390 00362190*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80365394 00362194*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80365398 00362198*/ PPC::Runtime::ASM::bctrl();
/*8036539C 0036219C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8d0);
/*803653A0 003621A0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*803653A4 003621A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d0, context->r31));
/*803653A8 003621A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803653AC 003621AC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803653B0 003621B0*/ PPC::Runtime::ASM::bctrl();
/*803653B4 003621B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9d4, context->r31));
/*803653B8 003621B8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x9d4);
/*803653BC 003621BC*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*803653C0 003621C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803653C4 003621C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803653C8 003621C8*/ PPC::Runtime::ASM::bctrl();
/*803653CC 003621CC*/ PPC::Runtime::ASM::li(context->r3, 0x30);
/*803653D0 003621D0*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*803653D4 003621D4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803653D8 003621D8*/ PPC::Runtime::ASM::beq(.L_803654B8);
/*803653DC 003621DC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*803653E0 003621E0*/ PPC::Runtime::ASM::lis(context->r8, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*803653E4 003621E4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*803653E8 003621E8*/ PPC::Runtime::ASM::lis(context->r7, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*803653EC 003621EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803653F0 003621F0*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*803653F4 003621F4*/ PPC::Runtime::ASM::lis(context->r6, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*803653F8 003621F8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*803653FC 003621FC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80365400 00362200*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C75F4 @ Get_MemoryOffset_HighBit);
/*80365404 00362204*/ PPC::Runtime::ASM::li(context->r0, String_ "border" 5 @ Get_MemoryOffset_SDA21);
/*80365408 00362208*/ PPC::Runtime::ASM::addi(context->r9, context->r8, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*8036540C 0036220C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80365410 00362210*/ PPC::Runtime::ASM::addi(context->r8, context->r7, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*80365414 00362214*/ PPC::Runtime::ASM::addi(context->r11, context->r3, 0x28);
/*80365418 00362218*/ PPC::Runtime::ASM::addi(context->r7, context->r6, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*8036541C 0036221C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80365420 00362220*/ PPC::Runtime::ASM::addi(context->r6, context->r5, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*80365424 00362224*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80365428 00362228*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804C75F4 @ Get_MemoryOffset_LowBit);
/*8036542C 0036222C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80365430 00362230*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80365434 00362234*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80365438 00362238*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8036543C 0036223C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80365440 00362240*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80365444 00362244*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r3));
/*80365448 00362248*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8036544C 0036224C*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*80365450 00362250*/ PPC::Runtime::ASM::stb(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80365454 00362254*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*80365458 00362258*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8036545C 0036225C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80365460 00362260*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80365464 00362264*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80365468 00362268*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8036546C 0036226C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80365470 00362270*/ PPC::Runtime::ASM::sth(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*80365474 00362274*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80365478 00362278*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r3));
/*8036547C 0036227C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80365480 00362280*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80365484 00362284*/ PPC::Runtime::ASM::beq(.L_803654B0);
/*80365488 00362288*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036548C 0036228C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80365490 00362290*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB4A8 @ Get_MemoryOffset_SDA21);
/*80365494 00362294*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB4A0 @ Get_MemoryOffset_SDA21);
/*80365498 00362298*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8036549C 0036229C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803654A0 003622A0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*803654A4 003622A4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803654A8 003622A8*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*803654AC 003622AC*/ PPC::Runtime::ASM::addi(context->r10, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_803654B0, 0x803654B0) //this is a jump label
/*803654B0 003622B0*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*803654B4 003622B4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_803654B8, 0x803654B8) //this is a jump label
/*803654B8 003622B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803654BC 003622BC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*803654C0 003622C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803654C4 003622C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803654C8 003622C8*/ PPC::Runtime::ASM::bctrl();
/*803654CC 003622CC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xad8);
/*803654D0 003622D0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*803654D4 003622D4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad8, context->r31));
/*803654D8 003622D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803654DC 003622DC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803654E0 003622E0*/ PPC::Runtime::ASM::bctrl();
/*803654E4 003622E4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xbdc);
/*803654E8 003622E8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x16c);
/*803654EC 003622EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbdc, context->r31));
/*803654F0 003622F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803654F4 003622F4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803654F8 003622F8*/ PPC::Runtime::ASM::bctrl();
/*803654FC 003622FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80365500 00362300*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80365504 00362304*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80365508 00362308*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8036550C 0036230C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80365510 00362310*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80365514 00362314*/ PPC::Runtime::ASM::blr();
}