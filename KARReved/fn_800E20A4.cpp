//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800E20A4(PPC::Runtime::GCContext* context)
{
/*800E20A4 000DEEA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*800E20A8 000DEEA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E20AC 000DEEAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800E20B0 000DEEB0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800E20B4 000DEEB4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800E20B8 000DEEB8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800E20BC 000DEEBC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800E20C0 000DEEC0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800E20C4 000DEEC4*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*800E20C8 000DEEC8*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r3));
/*800E20CC 000DEECC*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*800E20D0 000DEED0*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800E20D4 000DEED4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_4 @ Get_MemoryOffset_HighBit);
/*800E20D8 000DEED8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r24));
/*800E20DC 000DEEDC*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*800E20E0 000DEEE0*/ PPC::Runtime::ASM::addi(context->r30, context->r3, STRUCT_FLOAT_4 @ Get_MemoryOffset_LowBit);
/*800E20E4 000DEEE4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
/*800E20E8 000DEEE8*/ PPC::Runtime::ASM::b(.L_800E21BC);
RUNTIME_PPC_JUMP_LABEL(.L_800E20EC, 0x800E20EC) //this is a jump label
/*800E20EC 000DEEEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r24));
/*800E20F0 000DEEF0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E20F4 000DEEF4*/ PPC::Runtime::ASM::bne(.L_800E2108);
/*800E20F8 000DEEF8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*800E20FC 000DEEFC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xdc);
/*800E2100 000DEF00*/ PPC::Runtime::ASM::li(context->r4, 0xc3);
/*800E2104 000DEF04*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E2108, 0x800E2108) //this is a jump label
/*800E2108 000DEF08*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r24));
/*800E210C 000DEF0C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x8);
/*800E2110 000DEF10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
/*800E2114 000DEF14*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800E2118 000DEF18*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r3);
/*800E211C 000DEF1C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*800E2120 000DEF20*/ PPC::Runtime::ASM::bge(.L_800E2150);
/*800E2124 000DEF24*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*800E2128 000DEF28*/ PPC::Runtime::ASM::bne(.L_800E213C);
/*800E212C 000DEF2C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*800E2130 000DEF30*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xdc);
/*800E2134 000DEF34*/ PPC::Runtime::ASM::li(context->r4, 0xc3);
/*800E2138 000DEF38*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E213C, 0x800E213C) //this is a jump label
/*800E213C 000DEF3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r24));
/*800E2140 000DEF40*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x8);
/*800E2144 000DEF44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800E2148 000DEF48*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*800E214C 000DEF4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
RUNTIME_PPC_JUMP_LABEL(.L_800E2150, 0x800E2150) //this is a jump label
/*800E2150 000DEF50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r24));
/*800E2154 000DEF54*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E2158 000DEF58*/ PPC::Runtime::ASM::bne(.L_800E216C);
/*800E215C 000DEF5C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*800E2160 000DEF60*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xdc);
/*800E2164 000DEF64*/ PPC::Runtime::ASM::li(context->r4, 0xce);
/*800E2168 000DEF68*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E216C, 0x800E216C) //this is a jump label
/*800E216C 000DEF6C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r24));
/*800E2170 000DEF70*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0xc);
/*800E2174 000DEF74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
/*800E2178 000DEF78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*800E217C 000DEF7C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r3);
/*800E2180 000DEF80*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*800E2184 000DEF84*/ PPC::Runtime::ASM::bge(.L_800E21B4);
/*800E2188 000DEF88*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*800E218C 000DEF8C*/ PPC::Runtime::ASM::bne(.L_800E21A0);
/*800E2190 000DEF90*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*800E2194 000DEF94*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xdc);
/*800E2198 000DEF98*/ PPC::Runtime::ASM::li(context->r4, 0xce);
/*800E219C 000DEF9C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E21A0, 0x800E21A0) //this is a jump label
/*800E21A0 000DEFA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r24));
/*800E21A4 000DEFA4*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0xc);
/*800E21A8 000DEFA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800E21AC 000DEFAC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*800E21B0 000DEFB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
RUNTIME_PPC_JUMP_LABEL(.L_800E21B4, 0x800E21B4) //this is a jump label
/*800E21B4 000DEFB4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x18);
/*800E21B8 000DEFB8*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E21BC, 0x800E21BC) //this is a jump label
/*800E21BC 000DEFBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800E21C0 000DEFC0*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*800E21C4 000DEFC4*/ PPC::Runtime::ASM::blt(.L_800E20EC);
/*800E21C8 000DEFC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
/*800E21CC 000DEFCC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800E21D0 000DEFD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
/*800E21D4 000DEFD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
/*800E21D8 000DEFD8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x2);
/*800E21DC 000DEFDC*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x2c);
/*800E21E0 000DEFE0*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*800E21E4 000DEFE4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800E21E8 000DEFE8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r24));
/*800E21EC 000DEFEC*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*800E21F0 000DEFF0*/ PPC::Runtime::ASM::mr(context->r4, context->r6);
/*800E21F4 000DEFF4*/ PPC::Runtime::ASM::b(.L_800E220C);
RUNTIME_PPC_JUMP_LABEL(.L_800E21F8, 0x800E21F8) //this is a jump label
/*800E21F8 000DEFF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r24));
/*800E21FC 000DEFFC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x28);
/*800E2200 000DF000*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x2c);
/*800E2204 000DF004*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*800E2208 000DF008*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800E220C, 0x800E220C) //this is a jump label
/*800E220C 000DF00C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
/*800E2210 000DF010*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*800E2214 000DF014*/ PPC::Runtime::ASM::blt(.L_800E21F8);
/*800E2218 000DF018*/ PPC::Runtime::ASM::lis(context->r3, lbl_805575DC @ Get_MemoryOffset_HighBit);
/*800E221C 000DF01C*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*800E2220 000DF020*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805DF6E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E2224 000DF024*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_805575DC @ Get_MemoryOffset_LowBit);
/*800E2228 000DF028*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF6F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E222C 000DF02C*/ PPC::Runtime::ASM::mr(context->r27, context->r26);
/*800E2230 000DF030*/ PPC::Runtime::ASM::b(.L_800E2424);
RUNTIME_PPC_JUMP_LABEL(.L_800E2234, 0x800E2234) //this is a jump label
/*800E2234 000DF034*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r24));
/*800E2238 000DF038*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E223C 000DF03C*/ PPC::Runtime::ASM::bne(.L_800E2250);
/*800E2240 000DF040*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*800E2244 000DF044*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xdc);
/*800E2248 000DF048*/ PPC::Runtime::ASM::li(context->r4, 0xc3);
/*800E224C 000DF04C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E2250, 0x800E2250) //this is a jump label
/*800E2250 000DF050*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r24));
/*800E2254 000DF054*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0x8);
/*800E2258 000DF058*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800E225C 000DF05C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800E2260 000DF060*/ PPC::Runtime::ASM::lwzx(context->r28, context->r3, context->r0);
/*800E2264 000DF064*/ PPC::Runtime::ASM::bne(.L_800E2278);
/*800E2268 000DF068*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*800E226C 000DF06C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xdc);
/*800E2270 000DF070*/ PPC::Runtime::ASM::li(context->r4, 0xce);
/*800E2274 000DF074*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E2278, 0x800E2278) //this is a jump label
/*800E2278 000DF078*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r24));
/*800E227C 000DF07C*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0xc);
/*800E2280 000DF080*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800E2284 000DF084*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*800E2288 000DF088*/ PPC::Runtime::ASM::lwzx(context->r23, context->r3, context->r0);
/*800E228C 000DF08C*/ PPC::Runtime::ASM::bne(.L_800E22A0);
/*800E2290 000DF090*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*800E2294 000DF094*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xdc);
/*800E2298 000DF098*/ PPC::Runtime::ASM::li(context->r4, 0xef);
/*800E229C 000DF09C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E22A0, 0x800E22A0) //this is a jump label
/*800E22A0 000DF0A0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*800E22A4 000DF0A4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800E22A8 000DF0A8*/ PPC::Runtime::ASM::blt(.L_800E22BC);
/*800E22AC 000DF0AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
/*800E22B0 000DF0B0*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*800E22B4 000DF0B4*/ PPC::Runtime::ASM::bge(.L_800E22BC);
/*800E22B8 000DF0B8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E22BC, 0x800E22BC) //this is a jump label
/*800E22BC 000DF0BC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800E22C0 000DF0C0*/ PPC::Runtime::ASM::bne(.L_800E22D4);
/*800E22C4 000DF0C4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*800E22C8 000DF0C8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xe8);
/*800E22CC 000DF0CC*/ PPC::Runtime::ASM::li(context->r4, 0xf0);
/*800E22D0 000DF0D0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E22D4, 0x800E22D4) //this is a jump label
/*800E22D4 000DF0D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r24));
/*800E22D8 000DF0D8*/ PPC::Runtime::ASM::mulli(context->r3, context->r28, 0x2c);
/*800E22DC 000DF0DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r24));
/*800E22E0 000DF0E0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E22E4 000DF0E4*/ PPC::Runtime::ASM::add(context->r29, context->r4, context->r3);
/*800E22E8 000DF0E8*/ PPC::Runtime::ASM::bne(.L_800E22FC);
/*800E22EC 000DF0EC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*800E22F0 000DF0F0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xdc);
/*800E22F4 000DF0F4*/ PPC::Runtime::ASM::li(context->r4, 0xef);
/*800E22F8 000DF0F8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E22FC, 0x800E22FC) //this is a jump label
/*800E22FC 000DF0FC*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x0);
/*800E2300 000DF100*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800E2304 000DF104*/ PPC::Runtime::ASM::blt(.L_800E2318);
/*800E2308 000DF108*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r24));
/*800E230C 000DF10C*/ PPC::Runtime::ASM::cmpw(context->r23, context->r0);
/*800E2310 000DF110*/ PPC::Runtime::ASM::bge(.L_800E2318);
/*800E2314 000DF114*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800E2318, 0x800E2318) //this is a jump label
/*800E2318 000DF118*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800E231C 000DF11C*/ PPC::Runtime::ASM::bne(.L_800E2330);
/*800E2320 000DF120*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*800E2324 000DF124*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xe8);
/*800E2328 000DF128*/ PPC::Runtime::ASM::li(context->r4, 0xf0);
/*800E232C 000DF12C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E2330, 0x800E2330) //this is a jump label
/*800E2330 000DF130*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*800E2334 000DF134*/ PPC::Runtime::ASM::mulli(context->r3, context->r23, 0x2c);
/*800E2338 000DF138*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r24));
/*800E233C 000DF13C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*800E2340 000DF140*/ PPC::Runtime::ASM::add(context->r28, context->r4, context->r3);
/*800E2344 000DF144*/ PPC::Runtime::ASM::blt(.L_800E2358);
/*800E2348 000DF148*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x18);
/*800E234C 000DF14C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x118);
/*800E2350 000DF150*/ PPC::Runtime::ASM::li(context->r4, 0x124);
/*800E2354 000DF154*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E2358, 0x800E2358) //this is a jump label
/*800E2358 000DF158*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800E235C 000DF15C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*800E2360 000DF160*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*800E2364 000DF164*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800E2368 000DF168*/ PPC::Runtime::ASM::stwx(context->r3, context->r29, context->r0);
/*800E236C 000DF16C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800E2370 000DF170*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*800E2374 000DF174*/ PPC::Runtime::ASM::blt(.L_800E2388);
/*800E2378 000DF178*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x18);
/*800E237C 000DF17C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x148);
/*800E2380 000DF180*/ PPC::Runtime::ASM::li(context->r4, 0x127);
/*800E2384 000DF184*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E2388, 0x800E2388) //this is a jump label
/*800E2388 000DF188*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800E238C 000DF18C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*800E2390 000DF190*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800E2394 000DF194*/ PPC::Runtime::ASM::cmplw(context->r29, context->r28);
/*800E2398 000DF198*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800E239C 000DF19C*/ PPC::Runtime::ASM::stwx(context->r3, context->r28, context->r0);
/*800E23A0 000DF1A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800E23A4 000DF1A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*800E23A8 000DF1A8*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 2);
/*800E23AC 000DF1AC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800E23B0 000DF1B0*/ PPC::Runtime::ASM::lwzx(context->r4, context->r28, context->r3);
/*800E23B4 000DF1B4*/ PPC::Runtime::ASM::lwzx(context->r3, context->r29, context->r0);
/*800E23B8 000DF1B8*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800E23BC 000DF1BC*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E23C0 000DF1C0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800E23C4 000DF1C4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E23C8 000DF1C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*800E23CC 000DF1CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800E23D0 000DF1D0*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 2);
/*800E23D4 000DF1D4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800E23D8 000DF1D8*/ PPC::Runtime::ASM::lwzx(context->r4, context->r29, context->r3);
/*800E23DC 000DF1DC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r28, context->r0);
/*800E23E0 000DF1E0*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800E23E4 000DF1E4*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E23E8 000DF1E8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800E23EC 000DF1EC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E23F0 000DF1F0*/ PPC::Runtime::ASM::bne(.L_800E2404);
/*800E23F4 000DF1F4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x18);
/*800E23F8 000DF1F8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x174);
/*800E23FC 000DF1FC*/ PPC::Runtime::ASM::li(context->r4, 0x12e);
/*800E2400 000DF200*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E2404, 0x800E2404) //this is a jump label
/*800E2404 000DF204*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*800E2408 000DF208*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x18);
/*800E240C 000DF20C*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*800E2410 000DF210*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800E2414 000DF214*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*800E2418 000DF218*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*800E241C 000DF21C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800E2420 000DF220*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_800E2424, 0x800E2424) //this is a jump label
/*800E2424 000DF224*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800E2428 000DF228*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*800E242C 000DF22C*/ PPC::Runtime::ASM::blt(.L_800E2234);
/*800E2430 000DF230*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800E2434 000DF234*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800E2438 000DF238*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800E243C 000DF23C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800E2440 000DF240*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800E2444 000DF244*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*800E2448 000DF248*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800E244C 000DF24C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E2450 000DF250*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800E2454 000DF254*/ PPC::Runtime::ASM::blr();
}